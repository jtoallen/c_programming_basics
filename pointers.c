#include <stdio.h>

int main()
{
    int num;
    int *p; // a pointer variable

    num = 987;
    p = &num; // initializes pointer var and assigns the value of num

    printf("The address of 'num' is %p\n", &num); // uses memory location notation
    printf("The address of 'p' is %p\n", p);      // uses pointer var notation

    printf("The value of 'num' is %d\n", num);
    printf("The value of 'p' is %d\n", *p);

    return (0);
}