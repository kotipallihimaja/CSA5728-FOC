#include <stdio.h>
#define NUM_SALESPERSON 10
#define NUM_DAYS 7
void calculateSalesInfo(int sales[][NUM_DAYS], int numSalesperson) 
{
    int totalSalesWeek = 0;
    printf("Average Sales per Salesperson:\n");
    for (int i = 0; i < numSalesperson; i++) 
	{
        int totalSalesPerson = 0;
        for (int j = 0; j < NUM_DAYS; j++) 
		{
            totalSalesPerson += sales[i][j];
            totalSalesWeek += sales[i][j];
        }
        float averageSalesPerson = (float)totalSalesPerson / NUM_DAYS;
        printf("Salesperson %d: $%.2f\n", i + 1, averageSalesPerson);
    }
    printf("\nTotal Sales per Day:\n");
    for (int j = 0; j < NUM_DAYS; j++)
	 {
        int totalSalesDay = 0;
        for (int i = 0; i < numSalesperson; i++)
		 {
            totalSalesDay += sales[i][j];
        }
        printf("Day %d: $%d\n", j + 1, totalSalesDay);
    }
    printf("\nTotal Sales for the Week: $%d\n", totalSalesWeek);
}
int main() {
    int sales[NUM_SALESPERSON][NUM_DAYS];
    printf("Enter the sales data for each salesperson:\n");
    for (int i = 0; i < NUM_SALESPERSON; i++) 
	{
        printf("Salesperson %d:\n", i + 1);
        for (int j = 0; j < NUM_DAYS; j++) 
		{
            printf("Day %d: $", j + 1);
            scanf("%d", &sales[i][j]);
        }
    }
    calculateSalesInfo(sales, NUM_SALESPERSON);
return 0;
}
