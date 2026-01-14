// Write a program that displays command line arguments including file name in a message box.  
#include <windows.h>
#include <stdio.h>
int _stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    char buffer[256];
    sprintf(buffer, "%s", GetCommandLine());
    MessageBox(0, buffer, "Command Line Arguments", 0);
    return 0;
}