#include "myMath.h"
#define EXP 2.71828182846

double Power(double x , int y)
{
    double result = 1; // Initialize variable with neutral organ to multiply.
    for (int i = 0; i < y; i++)
    {
        result=result * x; // Multiply the variable by x, y times.
    }
    return result;
}

double Exponent(int x)
{
    // Call Power func with first variable=e, second variable=x (e^x).
    double result = Power(EXP , x); 
    return result;
}