#include <stdio.h>
#include <stdlib.h>
#define MAX_DEPARTMENTS 12
#define MAX_NAME_LENGTH 50
struct Employee 
{
    char name[MAX_NAME_LENGTH];
    char gender;
    int age;
    double wage;
    int department;
};
int main() 
{
    FILE *file;
    struct Employee employees[MAX_DEPARTMENTS][MAX_NAME_LENGTH];
    int departmentCount[MAX_DEPARTMENTS] = {0};
    int genderCount[MAX_DEPARTMENTS][2] = {0}; 
    double totalWage[MAX_DEPARTMENTS] = {0};
    int totalEmployees = 0;
    file = fopen("employee_data.txt", "r");
    if (file == NULL) 
	{
        fprintf(stderr, "Error opening file.\n");
        return 1;
    }
    while (fscanf(file, "%s %c %d %lf %d",
                  employees[totalEmployees]->name,
                  &employees[totalEmployees]->gender,
                  &employees[totalEmployees]->age,
                  &employees[totalEmployees]->wage,
                  &employees[totalEmployees]->department) == 5) 
				  {
        int departmentIndex = employees[totalEmployees]->department - 1;
        departmentCount[departmentIndex]++;
        genderCount[departmentIndex][employees[totalEmployees]->gender == 'F' ? 0 : 1]++;
        totalWage[departmentIndex] += employees[totalEmployees]->wage;
        totalEmployees++;
    }
    fclose(file);
    printf("a. Wages of women compared with those of men:\n");
    for (int i = 0; i < MAX_DEPARTMENTS; i++) 
	{
        double avgWage = totalWage[i] / departmentCount[i];
        printf("   Department %d - Average Wage: %.2lf\n", i + 1, avgWage);
    }
    printf("\nb. Total number of employees in each department:\n");
    for (int i = 0; i < MAX_DEPARTMENTS; i++) 
	{
        printf("   Department %d - Total Employees: %d\n", i + 1, departmentCount[i]);
    }
    printf("\nc. Number of women and men in each department:\n");
    for (int i = 0; i < MAX_DEPARTMENTS; i++) 
	{
        printf("   Department %d - Women: %d, Men: %d\n", i + 1, genderCount[i][0], genderCount[i][1]);
    }
    printf("\nd. Average age of women and men in each department:\n");
    for (int i = 0; i < MAX_DEPARTMENTS; i++) 
	{
        double avgAge = 0.0;
        if (genderCount[i][0] > 0) 
		{
            avgAge = 0.0;
            for (int j = 0; j < totalEmployees; j++) 
			{
                if (employees[j]->department == i + 1 && employees[j]->gender =='F') 
				{
                    avgAge += employees[j]->age;
                }
            }
            avgAge /= genderCount[i][0];
        }
        printf("Department %d - Average Age (Women): %.2lf\n", i + 1, avgAge);
        avgAge = 0.0;
        if (genderCount[i][1] > 0) 
		{
            for (int j = 0; j < totalEmployees; j++) 
			{
                if (employees[j]->department == i + 1 && employees[j]->gender=='M') 
				{
                    avgAge += employees[j]->age;
                }
            }
            avgAge /= genderCount[i][1];
        }
        printf("Department %d - Average Age (Men): %.2lf\n", i + 1, avgAge);
    }
    return 0;
}

