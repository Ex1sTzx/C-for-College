#include <stdio.h>

int main()
{
    int scores[] = {85, 92, 78, 95, 88}, n = 5, max = scores[0], min = scores[0];
    for (int i = 1; i < n; i++)
    {
        if (scores[i] > max)
            max = scores[i];
        if (scores[i] < min)
            min = scores[i];
    }
    printf("Max score: %d\n", max);
    printf("Min score: %d\n", min);
    return 0;
}
