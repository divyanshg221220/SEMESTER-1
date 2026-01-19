// Write a program that displays only the upper half of a bitmap of size 40 x 40.
#include <windows.h>
#include "helper.h"
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
    HBITMAP hbmp;
    HDC hmemdc;
    HGDIOBJ holdbmp;
    PAINTSTRUCT ps;
    hdc = BeginPaint(hWnd, &ps);
    hbmp = CreateBitmap(40, 40, 1, 1, NULL);
    hmemdc = CreateCompatibleDC(hdc);
    holdbmp = SelectObject(hmemdc, hbmp);
    BitBlt(hdc, 0, 0, 40, 20, hmemdc, 0, 0, SRCCOPY);
    EndPaint(hdc, &ps);
    SelectObject(hmemdc, holdbmp);
    DeleteObject(hbmp);
    DeleteDC(hmemdc);
}