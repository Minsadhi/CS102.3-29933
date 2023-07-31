#include <stdio.h>

void calculate_sum_difference (int num1, int num2) {

    int sum, difference;

    sum = num1 + num2;
    difference = num1 - num2;
    
    printf("Sum is %d \n", sum);
    printf("Difference is %d \n", difference);
}

int main () {

    int x, y;

    printf("Enter 1st number: ");
    scanf("%d", &x);

    printf("Enter 2st number: ");
    scanf("%d", &y);

    calculate_sum_difference(x, y);
}