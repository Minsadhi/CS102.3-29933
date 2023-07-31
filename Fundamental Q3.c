#include <stdio.h>

int main () {

    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf ("Enter an integer: ");
    scanf ("%d", &myInt);

    printf("Enter a float: ");
    scanf("%f", &myFloat);

    printf("Enter a double: ");
    scanf("%lf", &myDouble);

    printf("Enter a character: ");
    scanf(" %c", &myChar);

    printf("Integer value: %d\n", myInt);
    printf("Float value: %f\n", myFloat);
    printf("Double value: %lf\n", myDouble);
    printf("Character value: %c\n", myChar);

    return 0;
}