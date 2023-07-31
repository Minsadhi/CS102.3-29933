#include <stdio.h>

double product (int num1, float num2) {

    int product;

    product = num1 * num2;

    return product;
}

int main () {

    int x;
    float y;

    printf("Enter 1st number: ");
    scanf("%d", &x);

    printf("Enter 2nd number: ");
    scanf("%f", &y);

    printf("Product is %.2f\n", product(x, y));
}