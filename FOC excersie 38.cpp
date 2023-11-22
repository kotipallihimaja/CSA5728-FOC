#include <stdio.h>
int main()
 {
    double originalPrice, salePrice;
    int day;
    printf("Enter the original price of the item: ");
    scanf("%lf", &originalPrice);
    salePrice = originalPrice;
    printf("Day 1: %.2f\n", salePrice);
    for (day = 2; day <= 5; day++) {
        salePrice *= 0.9;  
        printf("Day %d: %.2f\n", day, salePrice);
    }
return 0;
}
