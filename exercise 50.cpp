#include <stdio.h>
int main() 
{
    int days = 14;
    float windSpeed[days];
    float sum = 0.0, average, maxSpeed = 0.0, minSpeed = 999.0;
    int maxDay, minDay;
    for (int i = 0; i < days; i++) 
	{
        printf("Enter the fastest wind speed for day %d: ", i + 1);
        scanf("%f", &windSpeed[i]);
        sum += windSpeed[i];
        if (windSpeed[i] > maxSpeed) 
		{
            maxSpeed = windSpeed[i];
            maxDay = i + 1; 
        }
        if (windSpeed[i] < minSpeed) 
		{
            minSpeed = windSpeed[i];
            minDay = i + 1; 
        }
    }
    average = sum / days;
    printf("\nAverage wind speed over two weeks: %.2f\n", average);
    printf("Day with the highest wind speed: Day %d, Speed: %.2f\n", maxDay, maxSpeed);
    printf("Day with the lowest wind speed: Day %d, Speed: %.2f\n", minDay, minSpeed);
    for (int i = 0; i < days; i++) 
	{
        printf("Day %d: Difference from average: %.2f\n", i + 1, maxSpeed - windSpeed[i] - average);
    }
    return 0;
}

