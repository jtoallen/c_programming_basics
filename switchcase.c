#include <stdio.h>

/*
For switch statements you can use multiple case comparisons.  For example
case 'A':
case 'a':
This allows us to check if user input upper or lowercase A and return a valid
puts statement
*/

int main()
{
    char a;

    printf("Please choose (A, B, C): ");
    scanf("%c", &a); // remember that char requires the '&' for chars using scanf

    switch (a)
    {
    case 'A':
    case 'a':
        puts("You chose A");
        break;

    case 'B':
    case 'b':
        puts("You chose B");
        break;

    case 'C':
    case 'c':
        puts("You chose C");
        break;

    default:
        puts("Your choice is invalid");
        // break;
    }

    return 0;
}