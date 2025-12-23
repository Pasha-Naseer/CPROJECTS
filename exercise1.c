#include <stdio.h>
int main()
{
printf("\033[2J\033[H");    
printf("Enter a num: ");
int x;
// x = getchar();
// while ((x = getchar()) != '\n' &&  x != EOF) {};
// x = getchar();
// We use scanf() when we want to input numbers.
scanf("\n%d", &x);
if (x > 1){
    printf("%d is bigger than 1!", x);
}
else if (x < 1){
    printf("%d is smaller than 1!", x);
}
else {
    printf("%d is 1!", x);
}
return 0;
}