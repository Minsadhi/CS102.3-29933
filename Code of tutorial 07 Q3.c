#include <stdio.h>

int products (int num1, int num2) {

    int product;

    product = num1 * num2;

    return product;
}

int main () {

    int a, b;

    printf("Enter 1st number: ");
    scanf ("%d", &a);

    printf("Enter 2nd number: ");
    scanf("%d", &b);

    printf("The product is %d \n", products(a, b));
}