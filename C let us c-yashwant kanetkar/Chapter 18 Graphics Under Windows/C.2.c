// Write a program that would draw a line by joining the new point where you have clicked the left mouse button with the last point where you clicked the left mouse button.  
#include <windows.h>
#include "helper.h"
#define max_line 100
void OnLeftClick(HWND, LPARAM);
void OnDestroy(HWND);
void OnPaint(HWND);
static COLORREF lineColor = RGB(0, 0, 0);
struct click_data
{
    int x1;
    int y1;
    int x2;
    int y2;
} clicks[max_line];
static int click_count = 0; 
int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int nCmdShow)
{
    MSG m;
    InitInstance(hInstance, nCmdShow, NULL);
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
    if (click_count < max_line * 2)
    {
        int index = click_count / 2;
        if (click_count % 2 == 0)
        {
            clicks[index].x1 = LOWORD(lParam);
            clicks[index].y1 = HIWORD(lParam);
        }
        else if (click_count % 2 == 1)
        {
            clicks[index].x2 = LOWORD(lParam);
            clicks[index].y2 = HIWORD(lParam);
            InvalidateRect(hWnd, NULL, TRUE);
        }
        click_count++;
    }
}
void OnDestroy(HWND hWnd)
{
    PostQuitMessage(0);
}
void OnPaint(HWND hWnd)
{
    HDC hdc;
    PAINTSTRUCT ps;
    HBRUSH hbr;
    HGDIOBJ holdbr;
    hdc = BeginPaint(hWnd, &ps);
    hbr = CreateSolidBrush(lineColor);
    holdbr = SelectObject(hdc, hbr);
    int index = click_count / 2;
    for (int i = 0; i < index; i++)
    {
        MoveToEx(hdc, clicks[i].x1, clicks[i].y1, NULL);
        LineTo(hdc, clicks[i].x2, clicks[i].y2);
    }
    SelectObject(hdc, holdbr);
    DeleteObject(hbr);
    EndPaint(hWnd, &ps);
}