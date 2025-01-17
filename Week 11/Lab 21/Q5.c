#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee employees[3], most_paid;

    for (int i = 0; i < 3; i++)
    {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Enter employee ID: ");
        scanf("%d", &employees[i].id);
        printf("Enter name: ");
        scanf("%s", employees[i].name);
        printf("Enter salary: ");
        scanf("%f", &employees[i].salary);
    }

    most_paid = employees[0];

    for (int i = 1; i < 3; i++)
    {
        if (employees[i].salary > most_paid.salary)
        {
            most_paid = employees[i];
        }
    }

    printf("\nEmployee with the highest salary:\n");
    printf("ID: %d\n", most_paid.id);
    printf("Name: %s\n", most_paid.name);
    printf("Salary: %.2f\n", most_paid.salary);

    return 0;
}
