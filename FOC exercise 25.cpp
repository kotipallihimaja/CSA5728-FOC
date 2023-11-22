#include <stdio.h>
int main() 
{
    int num1, num2;
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);
    if (num1 > num2) 
	{
        printf("The larger number is: %d\n", num1);
    } 
	else if (num2 > num1) 
	{
        printf("The larger number is: %d\n", num2);
    }
	 else 
	{
        printf("Both numbers are equal.\n");
    }
    return 0;
}

