#include <stdio.h>

struct Student
{
    int roll_no;
    char name[50];
    float marks;
};

int main()
{
    struct Student students[100];
    int n, choice;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    while (1)
    {
        printf("\nStudent Management System\n");
        printf("1. Add Student Record\n");
        printf("2. Display Student Records\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            for (int i = 0; i < n; i++)
            {
                printf("\nEnter details for student %d:\n", i + 1);
                printf("Enter roll number: ");
                scanf("%d", &students[i].roll_no);
                printf("Enter name: ");
                scanf("%s", students[i].name);
                printf("Enter marks: ");
                scanf("%f", &students[i].marks);
            }
            break;

        case 2:
            printf("\nStudent Records:\n");
            for (int i = 0; i < n; i++)
            {
                printf("\nStudent %d:\n", i + 1);
                printf("Roll Number: %d\n", students[i].roll_no);
                printf("Name: %s\n", students[i].name);
                printf("Marks: %.2f\n", students[i].marks);
            }
            break;

        case 3:
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
