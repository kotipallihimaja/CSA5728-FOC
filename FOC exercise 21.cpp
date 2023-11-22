#include<stdio.h>
int main()
{
	int num;
	printf("enter an integer:");
	scanf("%d",&num);
	if(num>0)
	{
		printf("the entered integer is positive.\n");
	}
	else if(num<0)
	{
		printf("the entered integer is negative.\n");
	}
	else
	{
		printf("the entered integer is zero.\n");
	}
	return 0;
}
