#include <stdio.h>

struct Employee
{
    int emp_id;
    char name[50];
    float salary;
};

struct Org
{
    char org_name[50];
    int org_number;
    struct Employee employees[100];
};

int main()
{
    struct Org Org;
    int n;

    printf("Enter Organisation name: ");
    scanf("%s", Org.org_name);
    printf("Enter Organisation number: ");
    scanf("%d", &Org.org_number);

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Enter employee ID: ");
        scanf("%d", &Org.employees[i].emp_id);
        printf("Enter employee name: ");
        scanf("%s", Org.employees[i].name);
        printf("Enter employee salary: ");
        scanf("%f", &Org.employees[i].salary);
    }

    printf("\nOrganisation Information:\n");
    printf("Organisation Name: %s\n", Org.org_name);
    printf("Organisation Number: %d\n", Org.org_number);

    printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nEmployee %d:\n", i + 1);
        printf("Employee ID: %d\n", Org.employees[i].emp_id);
        printf("Name: %s\n", Org.employees[i].name);
        printf("Salary: %.2f\n", Org.employees[i].salary);
    }

    return 0;
}
