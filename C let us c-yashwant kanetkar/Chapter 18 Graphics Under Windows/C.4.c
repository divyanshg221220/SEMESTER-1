// Write a program to create chessboard like boxes (8 X 8) in the client area. If the window is resized the boxes should also get resized so that all the 64 boxes are visible at all times. 
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
    RECT r;
    GetClientRect(hWnd, &r);
    int height, width;
    height = r.bottom;
    width = r.right;
    hdc = BeginPaint(hWnd, &ps);
    if (height > 0 && width > 0)
    {
        int box_height, box_width;
        box_height = height / 8;
        box_width = width / 8;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if ((i + j) % 2 == 0)
                {
                    FillRect(hdc, &(RECT){j * box_width, i * box_height, (j + 1) * box_width, (i + 1) * box_height},CreateSolidBrush(RGB(255, 255, 255)));
                }
                else
                {
                    FillRect(hdc, &(RECT){j * box_width, i * box_height, (j + 1) * box_width, (i + 1) * box_height},CreateSolidBrush(RGB(0, 0, 0)));
                }
            }
        }
    }
    EndPaint(hWnd, &ps);
}