#include "myMath.h"
#define EXP 2.71828182846

double Power(double x , int y)
{
    double result = 1; // Initialize variable with neutral organ to multiply.
    if (x==0) return 0;
    else if (y==0) return 0;
    else if (y<0) return 1/Power(x , -y);
    else for (int i = 0; i < y; i++)
    {
        result=result * x; // Multiply the variable by x, y times.
    }
    return result;
}

double Exponent(int x)
{
    // Call Power func with first variable=e, second variable=x (e^x).
    double result;
    if (x==0) return 1;
    else if (x>0) result = Power(EXP , x);
    else return 1/Power(EXP , -x);
    return result;
}