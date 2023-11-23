#include <stdio.h>
#define NUM_CLASS_LEVELS 5
#define NUM_MAJORS 7
void inputStudentData(int studentData[][NUM_MAJORS], int totalStudents) 
{
    for (int i = 0; i < totalStudents; ++i) 
	{
        printf("Enter class level for student %d (1-4 for undergrad, 5 for graduate): ", i + 1);
        int classLevel;
        scanf("%d", &classLevel);
        printf("Enter major for student %d (1-7, 0 if not declared): ", i + 1);
        int major;
        scanf("%d", &major);
        ++studentData[classLevel - 1][major];
    }
}
void displayStudentData(int studentData[][NUM_MAJORS], int totalStudents) 
{
    printf("\nClass Level\tMajor\tCount\n");
    for (int i = 0; i < NUM_CLASS_LEVELS; ++i) 
	{
        for (int j = 0; j < NUM_MAJORS; ++j) 
		{
            printf("%d\t\t%d\t%d\n", i + 1, j, studentData[i][j]);
        }
    }
}
int main()
{
    int studentData[NUM_CLASS_LEVELS][NUM_MAJORS] = {0};
    int totalStudents = 1200;
    inputStudentData(studentData, totalStudents);
    displayStudentData(studentData, totalStudents);
    return 0;
}

