#include <stdio.h>

struct Student
{
    int roll_no;
    char name[50];
    float marks;
};

int main()
{
    struct Student student;

    printf("Enter roll number: ");
    scanf("%d", &student.roll_no);
    printf("Enter name: ");
    scanf("%s", student.name);
    printf("Enter marks: ");
    scanf("%f", &student.marks);

    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student.roll_no);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
