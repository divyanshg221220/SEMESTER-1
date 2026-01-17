// Write a program, which displays "hello" at any place in the window where you click the left mouse button. If you click the right mouse button the color of subsequent hellos should change. 
#include <windows.h>
#include "helper.h"
#define max_click 100
void OnLeftClick(HWND, LPARAM);
void OnRightClick();
void OnDestroy(HWND);
void OnPaint(HWND);
static COLORREF textColor = RGB(0, 0, 0);
static COLORREF backgroundColor = RGB(255, 255, 255);
struct click_data
{
    int x;
    int y;
    COLORREF color;
} clicks[max_click];
static int click_count = 0; 
int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int nCmdShow)
{
    MSG m;
    InitInstance(hInstance, nCmdShow, "hello");
    while (GetMessage(&m, NULL, 0, 0))
    {
        TranslateMessage(&m);
        DispatchMessage(&m);
    }
    return 0;
}
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
        case WM_LBUTTONDOWN:
            OnLeftClick(hWnd, lParam);
            break;
        case WM_RBUTTONDOWN:
            OnRightClick();
            break;
        case WM_DESTROY:
            OnDestroy(hWnd);
            break;
        case WM_PAINT:
            OnPaint(hWnd);
            break;
        default:
            return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}
void OnLeftClick(HWND hWnd, LPARAM lParam)
{
    if (click_count < max_click)
    {
        clicks[click_count].x = LOWORD(lParam);
        clicks[click_count].y = HIWORD(lParam);
        clicks[click_count].color = textColor;
        click_count++;
        InvalidateRect(hWnd, NULL, TRUE);
    }
}
void OnRightClick()
{
    if (textColor == RGB(0,0,0)) textColor = RGB(255,0,0);
    else if (textColor == RGB(255, 0, 0)) textColor = RGB(0, 255, 0);
    else if (textColor == RGB(0, 255, 0)) textColor = RGB(0, 0, 255);
    else if (textColor == RGB(0, 0, 255)) textColor = RGB(0, 0, 0);
}
void OnDestroy(HWND hWnd)
{
    PostQuitMessage(0);
}
void OnPaint(HWND hWnd)
{
    HDC hdc;
    PAINTSTRUCT ps;
    HFONT hfont;
    LOGFONT f = {0};
    HGDIOBJ holdfont;
    char *font[] = { "Arial", "Times New Roman", "Comic Sans MS" } ;
    int i;
    hdc = BeginPaint(hWnd, &ps);
    SetBkMode(hdc, backgroundColor);
    for (i = 0; i < click_count; i++)
    {
        hfont = CreateFontIndirect(&f);
        holdfont = SelectObject(hdc, hfont);
        SetTextColor(hdc, clicks[i].color);
        TextOut(hdc, clicks[i].x, clicks[i].y, "hello", 5);
        SelectObject(hdc, holdfont);
        DeleteObject(hfont);
    }
    EndPaint(hWnd, &ps);
}