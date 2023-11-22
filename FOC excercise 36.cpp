#include<stdio.h>
int main()
 {
    int total_units = 0;
    float total_grade_points = 0.0;
    char grade;
    int units;
    while (1) 
	{
        printf("Enter the course name: ");
        char course_name[50];
        scanf("%s", course_name);
        printf("Enter the letter grade for %s: ", course_name);
        scanf(" %c", &grade);
        printf("Enter the number of units for %s: ", course_name);
        scanf("%d", &units);
        float grade_points;
        switch (grade)
		 {
            case 'A':
                grade_points = 4.0;
                break;
            case 'B':
                grade_points = 3.0;
                break;
            case 'C':
                grade_points = 2.0;
                break;
            case 'D':
                grade_points = 1.0;
                break;
            case 'F':
                grade_points = 0.0;
                break;
            default:
                printf("Invalid grade entered. Please try again.\n");
                continue;
        }
        float course_grade_points = grade_points * units;
        total_grade_points += course_grade_points;
        total_units += units;
        printf("Course %s: Grade Points = %.2f\n\n", course_name, course_grade_points);
        printf("Do you want to add more courses? (Y/N): ");
        char choice;
        scanf(" %c", &choice);
        if (choice == 'N' || choice == 'n')
            break;
    }
    float average = total_grade_points / total_units;
    printf("Grade Point Average: %.2f\n", average);
return 0;
}

