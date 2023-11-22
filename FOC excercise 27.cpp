#include <stdio.h>
#include <math.h>
double calculateSin(double x, int n) 
{
    double result = 0.0;
    int i;
    for (i=0;i<n;i++) 
	{
        int exponent =2 * i + 1;
        double term = pow(-1, i) * pow(x, exponent) / tgamma(exponent + 1);
        result += term;
    }
    return result;
}
int main() 
{
    double angle;
    printf("Enter the angle in radians: ");
    scanf("%lf", &angle);
    int terms;
    printf("Enter the number of terms in the series: ");
    scanf("%d", &terms);
    double sinValue = calculateSin(angle, terms);
    printf("Sin(%lf) = %lf\n", angle, sinValue);
    return 0;
}

