#include <stdio.h>

int main()
{
    int r;
    float area, p;
    printf("Enter the radius:");
    scanf("%d", &r);
    area = 3.14 * r * r;
    p = 2 * 3.14 * r;
    printf("Area=%6.2f, p=%6.2f", area, p);
    getchar();
    return 0;

}