#include <stdio.h>
int main()
{
    char x = getchar();
    printf("%c", x);
    while ((x = getchar()) != '\n' &&  x != EOF) {};  // now we have to empty the buffer
    x = getchar();
    printf("%c", x);
    return 0;
}