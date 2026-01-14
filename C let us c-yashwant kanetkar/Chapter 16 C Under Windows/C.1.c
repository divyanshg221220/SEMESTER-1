// Write a program that prints the value of hInstance in a message box.
#include <windows.h>
#include <stdio.h>
int _stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    char buffer[256];
    sprintf(buffer, "%p", (void*)hInstance);
    MessageBox(0, buffer, "hInstance", 0);
    return 0;
}