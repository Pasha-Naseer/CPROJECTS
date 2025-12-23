// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int x = 10;
//     clrscr();
//     printf("x=%d", x);
//     getch();
//     return 0;
// }
// This only works in old turbo C
#include <stdio.h>
int main()
{
    int x = 10;
    // clear screen and move cursor to top-left
    printf("\033[2J\033[H");
    printf("x=%d", x);
    getchar(); // waits for enter

}
