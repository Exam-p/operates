#include <stdio.h>
int main() 
{
    float a,b,c;
    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    c = a + b;
    printf("Addition of two numbers is %.2f\n",c);

    return 0;
}
