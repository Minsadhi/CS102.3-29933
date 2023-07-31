#include <stdio.h>

int main()
{
    int avgSpeed, trvDis, takenTime;  // Declare the variables

    printf("Input the travel distance(Meters): ");  // User output
    scanf("%d", &trvDis);  // User input

    printf("\n");

    printf("Input the elapsed time(Seconds): ");  // User output
    scanf("%d", &takenTime);  // User input

    printf("\n");

    avgSpeed = (trvDis / takenTime); // Process

    printf("Average Speed = %d\n", avgSpeed); // User output
    return 0;
}
