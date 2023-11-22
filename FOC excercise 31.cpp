#include <stdio.h>
float calculateWaterBill(int cubicFeet) {
    float bill = 0.0;
    if (cubicFeet <= 1000)
	 {
        bill = 15.0;
    }
	 else if (cubicFeet <= 2000) 
	 {
        bill = 15.0 + 0.0175 * (cubicFeet - 1000);
    } 
	else if (cubicFeet <= 3000)
	 {
        bill = 15.0 + 0.0175 * 1000 + 0.02 * (cubicFeet - 2000);
    } 
	else 
	{
        bill = 15.0 + 0.0175 * 1000 + 0.02 * 1000 + 70.0;
    }
    
    return bill;
}
int main() {
    int cubicFeet;
    float bill;
     printf("Enter the cubic feet of water used: ");
    scanf("%d", &cubicFeet);
    bill = calculateWaterBill(cubicFeet);
    printf("Water bill: $%.2f\n", bill);
    return 0;
}
