#include <stdio.h>

int main()
{
    int x, y, n;
    float average;
    printf("\nEnter three integers:");
    scanf("%d%d%d", &x, &y, &n);
    average = (float)(x + y + n) / 3;
    printf("\naverage=%6.2f", average);
    getchar();
    return 0;
}