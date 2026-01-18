// Write a program to gradient fill the entire client area with shades of blue color. 
#include <windows.h>
#include "helper.h"
void OnDestroy(HWND);
void OnPaint(HWND);
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
    HPEN hpen;
    HGDIOBJ holdpen;
    RECT r;
    GetClientRect(hWnd, &r);
    int height, width, intensity;
    height = r.bottom;
    width = r.right;
    hdc = BeginPaint(hWnd, &ps);
    if (height > 0)
    {
        for (int i = 0; i < height; i++)
        {
            intensity = (i * 255) / height;
            hpen = CreatePen(PS_SOLID, 1, RGB(0, 0, intensity));
            holdpen = SelectObject(hdc, hpen);
            MoveToEx(hdc, 0, i, NULL);
            LineTo(hdc, width, i);
            SelectObject(hdc, holdpen);
            DeleteObject(hpen);
        }
    }
    EndPaint(hWnd, &ps);
}