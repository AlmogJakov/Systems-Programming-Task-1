#include <stdio.h>
#include "myMath.h"

int main()
{
    double num;
    printf("Please insert a real number: ");
    scanf("%lf", &num);
    // Example: Input:3.45. Expected output:59.1491.
    float result = sub(add(Exponent((int)num),Power(num,3)),2);
    printf("The value of f(𝑥)=𝑒^𝑥+𝑥^3−2 at the point %lf is: %.4lf\n", num, result);

    // Example: Input:3.45. Expected output:34.155.
    result = add(mul(num,3),mul(Power(num,2),2));
    printf("The value of f(𝑥)=3x+2X^2 at the point %lf is: %.4lf\n", num, result);

    // Example: Input:3.45. Expected output:25.9509.
    result = sub(div(mul(Power(num,3),4),5),mul(num,2));
    printf("The value of f(𝑥)=(4x^3)/5-2x at the point %lf is: %.4lf\n", num, result);
    return 0;
}