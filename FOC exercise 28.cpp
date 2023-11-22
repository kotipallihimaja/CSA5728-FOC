#include <stdio.h>
#include <math.h>
double calculateCosine(double x, int terms) 
{
    double result = 1.0;
    int sign = -1; 
    for (int i=2;i<=terms*2;i+=2) 
	{
        result += sign * pow(x, i) / tgamma(i + 1);
        sign *=-1;
    }
    return result;
}
int main() 
{
    double angle;
    int terms;
    printf("Enter the angle in radians: ");
    scanf("%lf", &angle);
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    double cosineValue = calculateCosine(angle, terms);
    printf("Cosine of %.2f radians using %d terms is: %.6f\n", angle, terms, cosineValue);
    return 0;
}

