#include <stdio.h>
int main()
{
    int x = 1234;
    int z = 12;
    float y = 123.437;
    float e = 123.435;
    printf("x=%3d\n", x);
    printf("z=%4d\n", z);
    printf("x=%5d\n", x);
    printf("y=%5.2f\n", y); // گرد
    printf("e=%5.2f\n", e); // گرد
    printf("y=%7.3f\n", y);
    printf("y=%8.3f\n", y);
    getchar();
    return 0;
}
