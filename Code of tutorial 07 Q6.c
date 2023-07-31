#include <stdio.h>

void calculate (int num1, int num2) {

    int sum, difference;

    printf("Sum: %d\nDifference: %d\nProducts: %d\n", num1 + num2, num1 - num2, num1 * num2);

}

int main () {

    int x, y;

    printf("Enter 1st number: ");
    scanf("%d", &x);

    printf("Enter 2st number: ");
    scanf("%d", &y);

    calculate (x, y);
}