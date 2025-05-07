#include <stdio.h>

struct book {
    char title[50];
    char author[50];
    int pages;
    int price;
};

int main() {
    int n, i;
    int sum = 0;
    printf("Enter the number of books: ");
    scanf("%d", &n);
    struct book books[n];
    for (i = 0; i < n; i++) {
        printf("Details of book %d:\n", i + 1);
        printf("Enter the title: ");
        scanf(" %[^\n]", books[i].title);
        printf("Enter the author: ");
        scanf(" %[^\n]", books[i].author);
        printf("Enter the pages: ");
        scanf("%d", &books[i].pages);
        printf("Enter the price: ");
        scanf("%d", &books[i].price);
        sum += books[i].price;
    }

    printf("The total price is: %d\n", sum);
    return 0;
}
