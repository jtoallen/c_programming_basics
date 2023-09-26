#include <stdio.h>

int main()
{
    ////using an int
    int num;

    printf("Type an integer: ");
    scanf("%d", &num); // scanf uses &variable name
    printf("Integer you typed is %d\n", num);

    ////using a float.  Floats can give precision errors for Floats
    float float_num;

    printf("Type a float: ");
    scanf("%f", &float_num); // scanf uses &variable name
    printf("Float you typed is %f\n", float_num);

    ////using a string
    char str[255]; // must specify size of string
    printf("Type a string: ");
    scanf("%s", str); // scanf does NOT use & for string or array
    printf("String you typed is %s\n", str);

    ////using a Char
    //// for some reason this does not run correctly UNLESS the above code is
    ////commented out
    char single_char;
    printf("Type a char: ");
    scanf("%c", &single_char); // scanf does USE & for char
    printf("Character you typed is %c\n", single_char);

    return 0;
}