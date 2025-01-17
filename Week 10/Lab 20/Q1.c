#include <stdio.h>
#include <string.h>

int main()
{
    char names[][20] = {"Meena", "Bob", "Charlie", "David", "Sam"};
    int grades[] = {85, 92, 78, 95, 88};
    int n = 5;
    char searchName[20] = "Charlie";
    int found = -1;

    for (int i = 0; i < n; i++)
    {
        if (strcmp(names[i], searchName) == 0)
        {
            found = i;
            break;
        }
    }

    if (found != -1)
    {
        printf("Grade of %s: %d\n", searchName, grades[found]);
    }
    else
    {
        printf("%s not found\n", searchName);
    }

    return 0;
}
