// The screen is divided into 25 rows and 80 columns. The characters that are displayed on the screen are stored in a special memory called VDU memory (not to be confused with ordinary memory). Each character displayed on the screen occupies two bytes in VDU memory. The first of these bytes contains the ASCII value of the character being displayed, whereas, the second byte contains the colour in which the character is displayed. 
// For example, the ASCII value of the character present on zeroth row and zeroth column on the screen is stored at location number 0xB8000000. Therefore the colour of this character would be present at location number 0xB8000000 + 1. Similarly ASCII value of character in row 0, col 1 will be at location 0xB8000000 + 2, and its colour at 0xB8000000 + 3. 
// With this knowledge write a program which when executed would keep converting every capital letter on the screen to small case letter and every small case letter to capital letter. The procedure should stop the moment the user hits a key from the keyboard. 
// This is an activity of a rampant Virus called Dancing Dolls. (For monochrome adapter, use 0xB0000000 instead of 0xB8000000). 
#include <dos.h>
#include <conio.h>

void main() {
    char far *vdu_mem;   // 'far' pointer to access video memory
    char current_char;
    int i;

    // 1. Point to the base address of VGA memory
    // In 16-bit Turbo C, 0xB8000000 is represented as Segment 0xB800, Offset 0x0000
    // We cast the hardcoded address to a far char pointer.
    vdu_mem = (char far *)0xB8000000L; 

    // 2. Loop until a key is pressed
    while (!kbhit()) {
        
        // 3. Iterate through the screen buffer
        // 25 rows * 80 cols * 2 bytes = 4000 bytes total
        // We increment by 2 because we only want to change the Character, not the Colour.
        for (i = 0; i < 4000; i += 2) {
            
            // Read the character at the current position
            current_char = vdu_mem[i];

            // Toggle Logic:
            // If Uppercase (A-Z), add 32 to make it Lowercase
            if (current_char >= 'A' && current_char <= 'Z') {
                vdu_mem[i] = current_char + 32;
            }
            // If Lowercase (a-z), subtract 32 to make it Uppercase
            else if (current_char >= 'a' && current_char <= 'z') {
                vdu_mem[i] = current_char - 32;
            }
        }
    }
    
    // Clear the keypress from the buffer before exiting
    getch(); 
}