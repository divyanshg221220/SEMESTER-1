// Write a program that receives a 5-digit number and prints it out in large size as shown below. 
// #####    #####    #    #       ######           
//      #       #   ##    #       #
//      #       #    #    #       #
// #####        #    #    # #     ######
//      #   #####    #    #####         # 
//      #   #        #      #           #
//      #   #        #      #           #
// #####    #####   ###     #     ######
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char num[6];
    printf("Enter a 5-digit number: ");
    scanf("%s", num);
    char *line1[] = {"#####", " # ", "#####", "##### ", "#    ", "######", "#####", "#####", "#####", "#####"};
    char *line2[] = {"#   #", "## ", "    #", "     #", "#    ", "#     ", "#    ", "    #", "#   #", "#   #"};
    char *line3[] = {"#   #", " # ", "    #", "     #", "#    ", "#     ", "#    ", "    #", "#   #", "#   #"};
    char *line4[] = {"#   #", " # ", "    #", "##### ", "# #  ", "##### ", "#    ", "    #", "#####", "#   #"};
    char *line5[] = {"#   #", " # ", "#####", "     #", "#####", "     #", "#####", "    #", "#   #", "#####"};
    char *line6[] = {"#   #", " # ", "#    ", "     #", "  #  ", "     #", "#   #", "    #", "#   #", "    #"};
    char *line7[] = {"#   #", " # ", "#    ", "     #", "  #  ", "     #", "#   #", "    #", "#   #", "    #"};
    char *line8[] = {"#####", "###", "#####", "##### ", "  #  ", "##### ", "#####", "    #", "#####", "#####"};
    char **lines[] = {line1, line2, line3, line4, line5, line6, line7, line8};
    for (int i = 0; i < 9; i++)
    {
        printf("%s   %s   %s   %s   %s\n", lines[i][num[0] - '0'], lines[i][num[1] - '0'], lines[i][num[2] - '0'], lines[i][num[3] - '0'], lines[i][num[4] - '0']);
    }
    return 0;
}