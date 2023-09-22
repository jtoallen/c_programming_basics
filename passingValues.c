#include <stdio.h>

int product(float a, float b, float c);

int main()
{
    float valx, valy, valz;
    float x, y, z;
    printf("Type three numbers, separated by spaces: ");
    scanf("%f %f %f", &x, &y, &z);
    product(x, y, z);
}

int product(float a, float b, float c)
{
    float p;
    p = a * b * c;
    printf("The result of %.2f * %.2f * %.2f  is %.2f \n", a, b, c, p);

    return p;
}