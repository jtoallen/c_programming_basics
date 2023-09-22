#include <stdio.h>

/*
Placeholder Practice from C Basics LinkedIn Learning
*/

int main()
{
    int age;

    char x, y, z;
    x = 'A';
    y = 'B';
    z = 'C';

    // %d is for
    age = 30;
    printf("The C language is over %d years old\n", age);
    age = 35;
    printf("The C language is over %d years old\n", age);

    printf("Do Re Mi easy as %c%c%c\n", x, y, z);                      // with char
    printf("%s %s %s is easy as %c%c%c\n", "Do", "Re", "Mi", x, y, z); // with string and char

    // for FLOATS you need to use the decimal part .0 or .00, etc....
    float pi;
    pi = 22.00 / 7.0;
    printf("The value of pi is about %f \n", pi); // float placeholders

    // you can also direct C to do math that will populate the placeholders
    int a, b, c;
    // this will evaluate 2+2 and use it to populate the last placeholder
    printf("The value %d + %d = %d\n", 2, 2, 2 + 2);
    return (0);
}