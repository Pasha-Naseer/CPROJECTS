#include <stdio.h>

int main()
{
    int x, y, area, p;
    printf("Enter Length and width:");
    scanf("%d%d", &x, &y);
    area = x * y;
    p = (x + y) * 2;
    printf("Area=%d, p=%d", area, p);
    getchar();
    return 0;
}