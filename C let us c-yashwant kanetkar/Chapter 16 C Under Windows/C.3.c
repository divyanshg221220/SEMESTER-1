// Write a program that receives a number as a command line argument and prints its factorial value in a message box.  
#include <windows.h>
#include <stdio.h>
int _stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    int n = atoi(lpCmdLine), factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    char buffer[256];
    sprintf(buffer, "%d", factorial);
    MessageBox(0, buffer, "Factorial", 0);
    return 0;
}