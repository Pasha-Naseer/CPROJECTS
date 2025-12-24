#include <stdio.h>
int main()
{
    int x;
    int y;
    int z;
    // scanf(<first_statement>, <second_statement>)
    // first statement:
    // 1. format characters: declaring the type of input data
    // 2. empty place escape sequence: \t, \f\ \n (escapes all whitespaces and even 0s before the first character)

    scanf("\n%d", &x);
    printf("%d", x);
    scanf("%d, %d", &y, &z);  // since we have comma here the user should enter comma between
    printf("%d\n", y);  
    printf("%d\n", z);
    return 0;
    
}