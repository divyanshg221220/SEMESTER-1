// Write a program, which displays "hello" at any place in the window where you click the left mouse button. If you click the right mouse button the color of subsequent hellos should change. 
#include <windows.h>
#include <stdio.h>
static COLORREF g_textColor = RGB(0, 0, 0); 
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_LBUTTONDOWN: {
            int x = LOWORD(lParam);
            int y = HIWORD(lParam);
            HDC hdc = GetDC(hwnd);
            SetTextColor(hdc, g_textColor);
            SetBkMode(hdc, TRANSPARENT);
            TextOutA(hdc, x, y, "hello", 5);
            ReleaseDC(hwnd, hdc);
            return 0;
        }
        case WM_RBUTTONDOWN: {
            // Cycle through colors: black -> red -> green -> blue -> black
            if (g_textColor == RGB(0,0,0)) g_textColor = RGB(255,0,0);
            else if (g_textColor == RGB(255,0,0)) g_textColor = RGB(0,255,0);
            else if (g_textColor == RGB(0,255,0)) g_textColor = RGB(0,0,255);
            else g_textColor = RGB(0,0,0);
            return 0;
        }
        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
    }
    return DefWindowProcA(hwnd, uMsg, wParam, lParam);
}

int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    const char CLASS_NAME[] = "HelloClickClass";

    WNDCLASSA wc = {0};
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    RegisterClassA(&wc);

    HWND hwnd = CreateWindowExA(
        0,
        CLASS_NAME,
        "Click to Hello",
        WS_OVERLAPPEDWINDOW | WS_VISIBLE,
        CW_USEDEFAULT, CW_USEDEFAULT, 800, 600,
        NULL, NULL, hInstance, NULL
    );

    if (hwnd == NULL) return 0;

    MSG msg = {0};
    while (GetMessageA(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessageA(&msg);
    }

    return 0;
}