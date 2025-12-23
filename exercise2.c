#include <stdio.h>
int main()
{
    char ch;
    ch = getchar();
    if (ch == 'a'){
        printf("Letter a!");
    }
    else if (ch == 'b'){
        printf("Letter b!");
    }
    else{
        printf("Letter is not a or b!");
    }
    return 0;
}
