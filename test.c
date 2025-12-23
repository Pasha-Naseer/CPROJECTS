#include <stdio.h>
int main()
{
printf("\033[2J\033[H");    
int x;
printf("Enter a num: ");
// x = getchar();
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