// Write a program that displays three buttons ‘Yes’, ‘No’ ‘Cancel’ in the message box. 
#include <windows.h>
#include <stdio.h>
int _stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    MessageBox(0, NULL, NULL, MB_YESNOCANCEL);
    return 0;
}