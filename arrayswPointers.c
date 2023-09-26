#include <stdio.h>

// int main()
// {
//     int array[] = {11, 13, 17, 19};
//     int x;

//     for (x = 0; x < 4; x++)
//     {
//         printf("Element %d: %d\n", x + 1, array[x]);
//     }

//     return (0);
// }

// int main()
// {
//     int array[] = {11, 13, 17, 19};
//     int x;
//     int *pntr;

//     pntr = array; //No need for &array because we are referencing entire array
//     //not a single value within the array.

//     for (x = 0; x < 4; x++)
//     {
//         printf("Element %d: %d\n", x + 1, *pntr);
//         pntr++; //increments pntr which gets next value in array by
//         //incrementing the memory address by the size of the pointer variable.
//         //the next memory address increment is also the next value in the array
//     }

//     return (0);
// }

int main()
{
    int array[] = {11, 13, 17, 19};
    int x;
    int *pntr;

    pntr = array; //No need for &array because we are referencing entire array
                  //not a single value within the array.

    /*
    Below are 3 different ways to increment the pointer to access
    the next value of the array declared on line 38 
    */

    printf("Element referenced is %d\n", *(pntr));     //11
    printf("Element referenced is %d\n", *(pntr + 1)); //13
    printf("Element referenced is %d\n", *(pntr + 2)); //17
    printf("Element referenced is %d\n", *(pntr + 3)); //19

    printf("Element referenced is %d\n", *pntr);   //11
    printf("Element referenced is %d\n", pntr[1]); //13
    printf("Element referenced is %d\n", pntr[2]); //17
    printf("Element referenced is %d\n", pntr[3]); //19

    printf("Element referenced is %d\n", *pntr); //11
    pntr += 1;
    printf("Element referenced is %d\n", *pntr); //13
    pntr += 1;
    printf("Element referenced is %d\n", *pntr); //17
    pntr += 1;
    printf("Element referenced is %d\n", *pntr); //19

    return (0);
}
