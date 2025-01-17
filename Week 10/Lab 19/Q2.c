#include <stdio.h>

int main()
{
    int dates[] = {20231101, 5122006, 20240110}, date = 5122006, found = 0;
    for (int i = 0; i < 3; i++)
    {

        if (dates[i] == date)
        {
            found = 1;
            break;
        }
    }
    if (found)
        printf("Date found\n");
    else
        printf("Date not found\n");
    return 0;
}
