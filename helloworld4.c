#include <stdio.h>

int main()
{
    int a = 1234;
    printf("%2d\n", a);
    printf("%4d\n", a);
    printf("%5d\n", a);
    
    printf("********\n");

    float b = 123.43;
    printf("%5.3f\n", b);
    printf("%5.2f\n", b);
    printf("%5.1f\n", b);
    printf("%6.2f\n", b);
    printf("%7.2f\n", b);

    printf("********\n");

    float c = 123.45;
    printf("%5.3f\n", c);
    printf("%5.2f\n", c);
    printf("%5.1f\n", c);  // In Python it returns 123.5
    printf("%6.2f\n", c);
    printf("%7.2f\n", c);

    printf("********\n");

    // Each decimal literal is independently rounded to the nearest representable binary float.
    // Some land slightly above, some slightly below — depending on where the nearest binary numbers are.
    float d = 123.425;
    printf("%5.2f\n", d);  // In Python it returns 123.42

    float e = 123.424;
    printf("%5.2f\n", e);

    float test = 123.435;
    printf("%5.2f\n", test);  // In Python it returns 123.44 


}