#include <stdio.h>
int main() 
{
    int fillupNumber;
    int startingOdometer;
    int currentOdometer;
    float gallonsUsed;
    float totalGallons = 0;
    float totalMiles = 0;
    float averageMPG;
    printf("Enter the starting odometer reading: ");
    scanf("%d", &startingOdometer);
    for (fillupNumber = 1; fillupNumber <= 6; fillupNumber++) 
	{
        printf("\nFillup #%d\n", fillupNumber);
        printf("Enter the odometer reading: ");
        scanf("%d", &currentOdometer);
        printf("Enter the number of gallons used: ");
        scanf("%f", &gallonsUsed);
        totalGallons += gallonsUsed;
        totalMiles += currentOdometer - startingOdometer;
        startingOdometer = currentOdometer;
    }
    averageMPG = totalMiles / totalGallons;
    printf("\nAverage MPG: %.2f\n", averageMPG);
return 0;
}
