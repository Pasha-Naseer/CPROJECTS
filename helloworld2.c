#include <stdio.h>
int main()
{
    // printf("<first_statement>", <second_statement>)
    // second statement is what we want to display as output
    // first statement: 
    // 1. what exactly should be displayed as output 
    // 2. output formats that startwith % 
    // 3. excape sequences \t, \f, \n
    // statement too is optional
    int x = 10;
    float y = 1.2;
    printf("%d\n", x);
    printf("%f\n", y);

    // %d -> for integer
    // %f -> for float
    // %c -> for character
    // %s -> for string (multiple characters)
    // %p -> for pointer
    // %% -> for percentage
    
    // \f -> new page
    // \n -> new line
    // \t -> 8 whitespaces
    // \" -> prints "
    // \' -> prints '
    
    int e = 10;
    float z = 15.5;
    char ch = 'a';
    printf("\ne=%d, z=%f, ch=%c", e, z, ch);
    printf("\naddress of e is: %p", &e);
    
    char sentence[] = "Here is our sales data for this month:";
    printf("\n%s\n\t\"%d%% profitable\"", sentence, e);
    return 0;

    // "" and '' are different in C
    // '' represents a char but "" represents a string
    // size one byte vs an array of char automatically terminated by a special null charater:
    // \0
}