#include<stdio.h>
float calculateRoomCost(int numPeople, int isCompanyBusiness, int isOver60) {
    float baseCost = 0.0;
    float additionalCost = 0.0;
    float discount = 0.0;
    float roomCost = 0.0;
    if (numPeople == 2) 
	{
        baseCost = 85.0;
    } else if (numPeople == 3)
	 {
        baseCost = 90.0;
    } else if (numPeople == 4) 
	{
        baseCost = 95.0;
    } else if (numPeople > 4) 
	{
        baseCost = 95.0;
        additionalCost = 6.0 * (numPeople - 4);
    }
    roomCost = baseCost + additionalCost;
    if (isCompanyBusiness) 
	{
        discount = roomCost * 0.2;
    } else if (isOver60)
	 {
        discount = roomCost * 0.15;
    }
    roomCost -= discount;
        return roomCost;
}
int main() 
{
    int numPeople;
    int isCompanyBusiness;
    int isOver60;
    float roomCost;
    printf("Enter the number of people: ");
    scanf("%d", &numPeople);
    printf("Is the stay on company business? (0 for No, 1 for Yes): ");
    scanf("%d", &isCompanyBusiness);
    printf("Is the customer over 60 years of age? (0 for No, 1 for Yes): ");
    scanf("%d", &isOver60);
    roomCost = calculateRoomCost(numPeople, isCompanyBusiness, isOver60);
    printf("Cost of the room: $%.2f\n", roomCost);
    return 0;
}
