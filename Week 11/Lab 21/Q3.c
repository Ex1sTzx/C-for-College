#include <stdio.h>

struct Time
{
    int hrs;
    int min;
    int sec;
};

int main()
{
    struct Time t1, t2, result;

    printf("Enter first time (hrs min sec): ");
    scanf("%d %d %d", &t1.hrs, &t1.min, &t1.sec);

    printf("Enter second time (hrs min sec): ");
    scanf("%d %d %d", &t2.hrs, &t2.min, &t2.sec);

    result.sec = t1.sec + t2.sec;
    result.min = t1.min + t2.min + result.sec / 60;
    result.hrs = t1.hrs + t2.hrs + result.min / 60;

    result.sec %= 60;
    result.min %= 60;
    result.hrs %= 24;

    printf("Total Time: %d hrs %d min %d sec\n", result.hrs, result.min, result.sec);

    return 0;
}
