#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100
void printTestScores(char names[][50], int scores[][4], int numStudents, char searchName[]) 
{
    int found = 0;
    for (int i = 0; i < numStudents; ++i) 
	{
        if (strcmp(names[i], searchName) == 0) 
		{
            found = 1;
            printf("Student Name: %s\n", names[i]);
            printf("Test Scores: ");
            for (int j = 0; j < 4; ++j) 
			{
                printf("%d ", scores[i][j]);
            }
            printf("\n");
            break;
        }
    }
    if (!found) 
	{
        printf("Student not found.\n");
    }
}
int main() 
{
    char studentNames[MAX_STUDENTS][50];
    int testScores[MAX_STUDENTS][4];
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    printf("Enter student names and test scores:\n");
    for (int i = 0; i < numStudents; ++i) 
	{
        printf("Student %d Name: ", i + 1);
        scanf("%s", studentNames[i]);
        printf("Test Scores (4): ");
        for (int j = 0; j < 4; ++j) 
		{
            scanf("%d", &testScores[i][j]);
        }
    }
    char searchName[50];
    printf("Enter the student name to search: ");
    scanf("%s", searchName);
    printTestScores(studentNames, testScores, numStudents, searchName);
    return 0;
}

