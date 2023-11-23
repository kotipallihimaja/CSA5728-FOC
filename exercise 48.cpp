#include <stdio.h>
struct Alumni 
{
    int age;
    char gender;
    char maritalStatus;
    char collegeMajor[50];
    float salary;
};
int main() 
{
    int numAlumni;
    printf("Enter the number of alumni: ");
    scanf("%d", &numAlumni);
    struct Alumni alumni[numAlumni];
    for (int i = 0; i < numAlumni; ++i) 
	{
        printf("\nAlumni %d:\n", i + 1);
        printf("Age: ");
        scanf("%d", &alumni[i].age);
        printf("Gender (M/F): ");
        scanf(" %c", &alumni[i].gender);
        printf("Marital Status (S/M): ");
        scanf(" %c", &alumni[i].maritalStatus);
        printf("College Major: ");
        scanf("%s", alumni[i].collegeMajor);
        printf("Salary: ");
        scanf("%f", &alumni[i].salary);
    }
    int option1, option2;
    printf("\nEnter the two sets of items to calculate average salary:\n");
    printf("1. Age\n2. Gender\n3. Marital Status\n4. College Major\n5. Salary\n");
    printf("Enter option 1: ");
    scanf("%d", &option1);
    printf("Enter option 2: ");
    scanf("%d", &option2);
    float sum = 0.0;
    int count = 0;
    for (int i = 0; i < numAlumni; ++i) 
	{
        if ((option1 == 1 && option2 == 2) || (option1 == 2 && option2 == 1)) 
		{
            if (alumni[i].gender == 'M' && alumni[i].age >= 30) 
			{
                sum += alumni[i].salary;
                count++;
            }
        } 
		else if ((option1 == 4 && option2 == 5) || (option1 == 5 && option2 == 4)) 
		{
        
            if int strcmp(alumni[i].collegeMajor, "ComputerScience") == 0 
			{
                sum += alumni[i].salary;
                count++;
            }
        }

    }
    if (count != 0) 
	{
        float averageSalary = sum / count;
        printf("\nAverage Salary: %.2f\n", averageSalary);
    }
	 else 
	{
        printf("\nNo matching records found.\n");
    }
    return 0;
}

