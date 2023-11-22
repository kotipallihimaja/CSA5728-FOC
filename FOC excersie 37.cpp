#include<stdio.h> 
int main()
{
float basic_cost,excise_duty=0.15,sales_tax=0.1,octroi=0.05,road_tax=0.01;
printf("Enter the basic cost of vehicle: ");
scanf("%f",&basic_cost);
excise_duty=excise_duty*basic_cost;
sales_tax=sales_tax*basic_cost;
octroi=octroi*basic_cost;
road_tax=road_tax*basic_cost;
printf("\nTotal cost after taxation = %0.2f",basic_cost+excise_duty+sales_tax+octroi+road_tax);
getchar();
return 0;
}
