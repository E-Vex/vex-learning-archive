#include <stdio.h>
#include <math.h>

// Define the function f(x) = 2^x - x - 2
double f(double x)
{
    return pow(2.0, x) - x - 2;
}

// Bisection method
double bisection(double a, double b, double tol)
{
    double mid;
    while ((b - a) / 2.0 > tol)
    {
        mid = (a + b) / 2.0;
        if (f(mid) == 0.0)
            break;
        else if (f(a) * f(mid) < 0.0)
            b = mid;
        else
            a = mid;
    }
    return (a + b) / 2.0;
}

int main()
{
    double a = -2.0, b = -1.0;
    double tol = 1e-6;
    double root = bisection(a, b, tol);
    printf("root ≈ %.6f\n", root);
    return 0;
}