#include <stdio.h>

struct Address
{
    char city[50];
    char state[50];
    int pin_code;
};

struct Student
{
    int roll_no;
    char name[50];
    float marks;
    struct Address address;
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

    printf("Enter city: ");
    scanf("%s", student.address.city);
    printf("Enter state: ");
    scanf("%s", student.address.state);
    printf("Enter pin code: ");
    scanf("%d", &student.address.pin_code);

    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student.roll_no);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);
    printf("Address:\n");
    printf("City: %s\n", student.address.city);
    printf("State: %s\n", student.address.state);
    printf("Pin Code: %d\n", student.address.pin_code);

    return 0;
}
