#include <stdio.h>

// void blof(); //prototypes the blof function for compiler. must be included
// //before the function call to blof() is executed.

// int main()
// {
//     puts("The main() function always runs first");
//     blof();
//     puts("Thank for running blof");

//     return (0);
// }

// void blof(void)
// {
//     puts("The blof() functions runs when it is called");
// }

/*
When the function is declared and defined before the main() function
then the prototype is not necessary as in the example above with the blof() fn. 
*/

// void soup(void)
// {
//     puts("No soup for you!");
// }

// int main()
// {
//     printf("At breakfast I tried but he said ");
//     soup();
//     printf("At lunch I tried again but he said ");
//     soup();
//     printf("At dinner still I tried but he said ");
//     soup();

//     return (0);
// }

/*
the cheers() function below has var x that exists only in function scope
of the cheers() function.  i.e. main() cannot refer to it
*/

// void cheers();

// int main()
// {
//     puts("Free dinner for all");
//     cheers();
//     puts("Free dessertt for all");
//     cheers();
//     return (0);
// }

// void cheers(void)
// {
//     int x;
//     for (x = 0; x < 3; x++)
//     {
//         printf("Yes!");
//     }
//     putchar('\n');
// }

// //Nevermore function

// void repeat(int count);

// int main()
// {
//     puts("At first all the raven said was ");
//     repeat(1);
//     puts("But then he went crazy and kept saying ");
//     repeat(5);

//     return (0);
// }

// void repeat(int count)
// {
//     int x;
//     for (x = 0; x < count; x++)
//     {
//         puts("Nevermore!");
//     }
// }

// //product function

// void product(float a, float b, float c);

// int main()
// {
//     float x, y, z;
//     printf("Type three numbers separated by one space ");
//     scanf("%f %f %f", &x, &y, &z);
//     product(x, y, z);

//     return (0);
// }

// void product(float a, float b, float c)
// {
//     float p;

//     p = a * b * c;

//     printf("%f * %f * %f = %f \n", a, b, c, p);
// }

//more complicated function

// void bar(char c, int count);

// int main()
// {
//     int x;

//     for (x = 1; x < 11; x++)
//     {
//         bar('*', x * 2);
//     }
//     return (0);
// }

// void bar(char c, int count)
// {
//     int x;
//     for (x = 0; x < count; x++)
//     {
//         putchar(c);
//     }
//     putchar('\n');
// }

// void evaluate(int num);

// int main()
// {
//     int x;
//     printf("Enter a number: ");
//     scanf("%d", &x);
//     evaluate(x);

//     return (0);
// }

// void evaluate(int num)
// {
//     if (num > 10)
//     {
//         printf("The number %d is greater than 10\n", num);
//     }
//     else if (num < 10)
//     {
//         printf("The number %d is less than 10\n", num);
//     }
//     else
//     {
//         printf("You typed %d\n", num);
//     }
// }

// char giveMeAnA(void);

// int main()
// {
//     char grade;
//     grade = giveMeAnA();
//     printf("You received an %c on your exam.\n", grade);

//     return (0);
// }

// char giveMeAnA(void)
// {
//     return ('A');
// }

// float product(float num1, float num2, float num3);

// int main()
// {
//     float a, b, c, total;

//     printf("Type threeb numbers to multiply: ");
//     scanf("%f %f %f", &a, &b, &c);
//     total = product(a, b, c);
//     printf("The product of your values is %f\n", total);

//     return (0);
// }

// float product(float num1, float num2, float num3)
// {
//     return (num1 * num2 * num3);
// }

int max(int num1, int num2);

int main()
{
    int num1, num2;
    printf("Enter two values to compare: ");
    scanf("%d %d", &num1, &num2);
    int compare = max(num1, num2);
    printf("The %d is larger\n", compare);
    return (0);
}

int max(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    return num2;
}