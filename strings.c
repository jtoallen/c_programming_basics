#include <stdio.h>

int main()
{
    /// char demo when string var IS initialized
    //// spaces are valid characters in a STRING
    ////%s is string placeholder
    // char password[] = "spoon";
    // printf("The password is %s\n", password);

    ////to fetch a string from STDIN you can use scanf but it's not perfect
    //// it CANNOT do white spaces: space, tab, or newline
    //// scanf() is a WORD input function
    // char name[15]; // room for 14 characters.
    //  printf("Type your name: ");
    //  scanf("%s", name); //&name is not required for arrays
    //  printf("Your name is %s.\n", name);

    //// A better method for reading in strings is fgets()
    //// fgets() is really for file reading, but it can read text from STDIN

    //// this is not being INITIALIZED so it needs the size. which is 64.
    //// you need to include the size of the string plus 1 for the null character terminator
    char input[64];
    printf("Type the instructions: ");
    /// string input buffer, character length, file from
    /// which to read, stdin is considered a file always open for input
    fgets(input, 64, stdin);
    puts("Thank you. Here are the instructions: ");
    puts(input);

    return (0);
}
