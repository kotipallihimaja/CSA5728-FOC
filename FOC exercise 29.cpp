#include <stdio.h>
double calculateExponentialSeries(double x, int n) 
{
    double result = 1.0; 
    for (int i=1;i<=n;++i) 
	{
        double term = 1.0;
        for (int j=1;j<=i;++j) 
		{
            term *= x / j;
        }
        if (i % 2 == 0) 
		{
            result += term;
        } else 
		{
            result -= term;
        }
    }
    return result;
}
int main() 
{
    double x;
    int n;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    double result = calculateExponentialSeries(x, n);
    printf("e^%.2f - 1 = %.6f\n", x, result);
    return 0;
}

