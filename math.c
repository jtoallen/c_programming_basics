#include <stdio.h>
#include <math.h>

int main()
{

    /*
    int a;
    int b = 5;
    printf("Type a number: ");
    scanf("%d", &a);
    printf("%d + %d = %d\n", a, b, a + b);
*/
    float r;
    r = sqrt(2.0);

    printf("The square root of 2 is %f\n", r);

    float p;
    p = pow(8.0, 2.0);
    printf("8 squared is %f\n", p);

    float a, b;
    printf("Input a value: ");
    scanf("%f", &a);
    printf("Input a value: ");
    scanf("%f", &b);
    printf("Addition %f + %f = %f\n", a, b, a + b);
    printf("Division %f / %f = %f\n", a, b, a / b);
    printf("Subtraction %f - %f = %f\n", a, b, a - b);
    printf("Power %f ^ %f\n", a, b, pow(a, b));
    printf("The square root of %f is %f\n", a, sqrt(a));
    printf("The square root of %d is %d\n", b, sqrt(b));

    return 0;
}