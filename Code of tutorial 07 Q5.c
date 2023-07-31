#include <stdio.h>

void calculate_sum () {

    int num1, num2, sum;

    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum is %d\n", sum);
}

int main () {

    calculate_sum();
    calculate_sum();
    calculate_sum();
    calculate_sum();
}