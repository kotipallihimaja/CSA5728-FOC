#include <stdio.h>
float calculateTicketCharge(int age) 
 {
    float charge = 0.0;
    if (age >= 55) 
	{
        charge = 10.0;
    } else if (age >= 21 && age <= 54) 
	{
        charge = 15.0;
    } else if (age >= 13 && age <= 20) 
	{
        charge = 10.0;
    } else if (age >= 3 && age <= 12)
	 {
        charge = 5.0;
    } else 
	{
        charge = 0.0;
    }
        return charge;
}
int main()
 {
    int age;
    float ticketCharge;
    printf("Enter the age of the person: ");
    scanf("%d", &age);
    ticketCharge = calculateTicketCharge(age);
    printf("Ticket charge: $%.2f\n", ticketCharge);
    return 0;
}
