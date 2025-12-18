// The screen is divided into 25 rows and 80 columns. The characters that are displayed on the screen are stored in a special memory called VDU memory (not to be confused with ordinary memory). Each character displayed on the screen occupies two bytes in VDU memory. The first of these bytes contains the ASCII value of the character being displayed, whereas, the second byte contains the colour in which the character is displayed. 
// For example, the ASCII value of the character present on zeroth row and zeroth column on the screen is stored at location number 0xB8000000. Therefore the colour of this character would be present at location number 0xB8000000 + 1. Similarly ASCII value of character in row 0, col 1 will be at location 0xB8000000 + 2, and its colour at 0xB8000000 + 3. 
// With this knowledge write a program which when executed would keep converting every capital letter on the screen to small case letter and every small case letter to capital letter. The procedure should stop the moment the user hits a key from the keyboard. 
// This is an activity of a rampant Virus called Dancing Dolls. (For monochrome adapter, use 0xB0000000 instead of 0xB8000000). 
#include <windows.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if (!GetConsoleScreenBufferInfo(h, &csbi))
    {
        return 1;
    }
    int width = 25, height = 80;
    DWORD read;
    while (!kbhit())
    {
        for (int y = 0; y < height; ++y)
        {
            for (int x = 0; x < width; ++x)
            {
                COORD pos = { (SHORT)x, (SHORT)y };
                char ch = 0;
                if (!ReadConsoleOutputCharacterA(h, &ch, 1, pos, &read))
                {
                    continue;
                }
                if (ch >= 'A' && ch <= 'Z')
                {
                    ch = ch + 32;
                }
                else if (ch >= 'a' && ch <= 'z')
                {
                    ch = ch - 32;
                }
                WriteConsoleOutputCharacterA(h, &ch, 1, pos, &read);
            }
        }
        Sleep(50);
    }
    return 0;
}