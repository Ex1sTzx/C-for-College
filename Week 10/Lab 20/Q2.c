#include <stdio.h>
#include <string.h>

int main()
{
    char classmates[][20] = {"Samarth", "Bob", "Meena", "David", "Eva"};
    char phoneNumbers[][15] = {"1234567890", "9876543210", "5551234567", "5559876543", "5551112222"};
    int n = 5;
    char searchName[20] = "David";
    int found = -1;

    for (int i = 0; i < n; i++)
    {
        if (strcmp(classmates[i], searchName) == 0)
        {
            found = i;
            break;
        }
    }

    if (found != -1)
    {
        printf("Phone number of %s: %s\n", searchName, phoneNumbers[found]);
    }
    else
    {
        printf("%s not found\n", searchName);
    }

    return 0;
}
