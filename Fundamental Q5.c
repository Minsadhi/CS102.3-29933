#include <stdio.h>

int main () {

    float num1, num2;
    float avg;

    printf("Enter first number with decimal: ");
    scanf("%f", &num1);

    printf("Enter second number with decimal: ");
    scanf("%f", &num2);
    
    avg = (num1 + num2) / 2;

    printf("Average = %.3f\n", avg);

    return 0;
}