#include <stdio.h>

struct Book
{
    char title[50];
    char author[50];
    float price;
};

int main()
{
    struct Book books[3], exp, cheap;

    for (int i = 0; i < 3; i++)
    {
        printf("Enter details for book %d:\n", i + 1);
        printf("Enter title: ");
        scanf("%s", books[i].title);
        printf("Enter author: ");
        scanf("%s", books[i].author);
        printf("Enter price: ");
        scanf("%f", &books[i].price);
    }

    exp = books[0];
    cheap = books[0];

    for (int i = 1; i < 3; i++)
    {
        if (books[i].price > exp.price)
        {
            exp = books[i];
        }
        if (books[i].price < cheap.price)
        {
            cheap = books[i];
        }
    }

    printf("\nMost Expensive Book:\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", exp.title, exp.author, exp.price);
    printf("\ncheap Book:\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", cheap.title, cheap.author, cheap.price);

    return 0;
}
