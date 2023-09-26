#include <stdio.h>

// int main()
// {
//     int a, b;
//     int *pntr;

//     a = 1234;  //assigns val for var a
//     pntr = &a; //initializes pntr to address of a
//     b = *pntr; //var b is assigned val of pntr's address, which == val of var a

//     printf("A is %d and B is %d\n", a, b);

//     return (0);
// }

// int main()
// {
//     int a, b;
//     int *pntr;

//     pntr = &a;    //address of var a
//     *pntr = 1234; //stores 1234 in address which is also referring to var a
//     pntr = &b;
//     *pntr = 5678;

//     printf("A is %d and B is %d \n", a, b);

//     return (0);
// }

//common mistakes
int main()
{
    //This code with the mistake
    float price, *pntr;
    *pntr = 99.98; //the problem here is that the pntr is not initialized

    // //The Correct Code
    // float price, *pntr;
    // pntr = &price; //this statement initializes variable
    // *pntr = 99.98;

    printf("The price is $%.2f\n", price);

    return (0);
}