#include <stdio.h>

int main () {

    char name[20];
    int birthyear, age;

    printf("Enter student name: ");
    scanf("%s", &name);

    printf("Enter student birth year: ");
    scanf("%d", &birthyear);

    age = 2023 - birthyear;

    printf("%s is %d years old", name, age);

    return 0;
}