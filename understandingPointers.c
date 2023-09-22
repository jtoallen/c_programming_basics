#include <stdio.h>

int main()
{
    int pokey;
    int *p; //a pointer variable

    pokey = 987;
    p = &pokey;
    //initializes pointer var
    printf("The address of 'pokey' is %p\n", &pokey); //uses memory location notation
    printf("The address of 'p' is %p\n", p);          //uses pointer var notation

    printf("The value of 'pokey' is %d\n", pokey);
    printf("The value of 'p' is %d\n", *p);

    return (0);
}