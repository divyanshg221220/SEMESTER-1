// Write a program that displays different text in different colors and fonts at different places after every 10 seconds. 
#include <windows.h>
#include "helper.h"
#include <string.h>
void OnDestroy(HWND);
void OnPaint(HWND);
struct text_data
{
    char text[25];
    char font[25];
    COLORREF color;
    int x;
    int y;
};
int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int nCmdShow)
{
    MSG m;
    InitInstance(hInstance, nCmdShow, NULL);
    while (GetMessage(&m, NULL, 0, 0))
    {
        DispatchMessage(&m);
    }
    return 0;
}
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
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
    RECT r;
    GetClientRect(hWnd, &r);
    int height, width;
    height = r.bottom;
    width = r.right;
    struct text_data text_data[3] = {{"hello", "Arial", RGB(255, 0, 0), 100, 100}, {"hello world", "Times New Roman", RGB(0, 255, 0), width / 2, height / 2}, {"hello windows", "Comic Sans MS", RGB(0, 0, 255), width - 100, height - 100}};
    int i;
    hdc = BeginPaint(hWnd, &ps);
    for (i = 0; i < 3; i++)
    {
        strcpy(f.lfFaceName, text_data[i].font);
        f.lfHeight = 40;
        hfont = CreateFontIndirect(&f);
        holdfont = SelectObject(hdc, hfont);
        SetTextColor(hdc, text_data[i].color);
        TextOut(hdc, text_data[i].x, text_data[i].y, text_data[i].text, strlen(text_data[i].text));
        SelectObject(hdc, holdfont);
        DeleteObject(hfont);
        if (i <= 1)
        {
            Sleep(10000);
        }
    }
    EndPaint(hWnd, &ps);
}