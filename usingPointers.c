#include <stdio.h>

int main()
{
    int a, b;
    int *ptr;

    a = 1234; // assigns val for var a
    ptr = &a; // initializes ptr to address of a
    b = *ptr; // var b is assigned val of ptr's address, which == val of var a

    printf("A is %d and B is %d\n", a, b);

    return (0);
}

// int main()
// {
//     int a, b;
//     int *ptr;

//     ptr = &a;    //address of var a
//     *ptr = 1234; //stores 1234 in address which is also referring to var a
//     ptr = &b;
//     *ptr = 5678;

//     printf("A is %d and B is %d \n", a, b);

//     return (0);
// }

// //common mistakes
// int main()
// {
//     //This code with the mistake
//     float price, *ptr;
//     *ptr = 99.98; //the problem here is that the ptr is not initialized

//     // //The Correct Code
//     // float price, *ptr;
//     // ptr = &price; //this statement initializes variable
//     // *ptr = 99.98;

//     printf("The price is $%.2f\n", price);

//     return (0);
// }