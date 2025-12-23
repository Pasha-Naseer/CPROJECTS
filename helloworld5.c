#include <stdio.h>
int main()
{
    int x;
    int y;
    // scanf(<first_statement>, <second_statement>)
    // first statement:
    // 1. format characters: declaring the type of input data
    // 2. empty place excape sequence: \t, \f\ \n (escapes all whitespaces and even 0s before the first character)

    scanf("\n%d", &x);
    scanf("%d, %d", &x, &y);  // since we have comma here the user should enter comma between
    printf("%d\n", x);  
    printf("%d\n", y);
    return 0;
    
}