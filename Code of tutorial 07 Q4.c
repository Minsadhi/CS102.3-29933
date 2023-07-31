#include <stdio.h>

float quotient (float num1, float num2) {

    float quotient;

    if (num2 == 0) {
        printf("Can not divide by zero");
    }
    else {
        quotient = num1 / num2;
    }

    return quotient;
}

int main () {

    float x, y;

    printf("Enter 1st number: ");
    scanf("%f", &x);

    printf("Enter 2nd number: ");
    scanf("%f", &y);

    printf("Quotient is %.2f\n", quotient(x, y));
}