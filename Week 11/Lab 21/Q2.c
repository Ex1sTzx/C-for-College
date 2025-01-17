#include <stdio.h>

struct Student
{
    int roll_no;
    char name[50];
    float marks;
};

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

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

    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
