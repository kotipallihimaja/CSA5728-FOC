#include <stdio.h>
#define NUM_HOURS 24
#define MIN_EMPLOYEES 3
#define EMPLOYEES_PER_CUSTOMER 1 / 20
void calculateEmployeesNeeded(int customers[]) 
{
    int employees[NUM_HOURS];
    for (int hour = 0; hour < NUM_HOURS; hour++)
	 {
        int totalCustomers = customers[hour];
        int neededEmployees = MIN_EMPLOYEES + (totalCustomers / 20);
        employees[hour] = neededEmployees;
    }
    printf("Employees Needed per Hour:\n");
    for (int hour = 0; hour < NUM_HOURS; hour++) 
	{
        printf("Hour %d: %d employees\n", hour, employees[hour]);
    }
}
int main() 
{
    int customers[NUM_HOURS];
    printf("Enter the number of customers each hour for 14 days:\n");
    for (int hour = 0; hour < NUM_HOURS; hour++)
	 {
        printf("Hour %d: ", hour);
        scanf("%d", &customers[hour]);
    }
    calculateEmployeesNeeded(customers);
return 0;
}
