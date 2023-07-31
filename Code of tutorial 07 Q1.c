#include <stdio.h>

void calculate () {

    int sum, difference;
    int num1, num2;

    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    difference = num1 - num2;

    printf("Sum is %d \n", sum);
    printf("Difference is %d \n", difference);

}

int main () {

    calculate();
}