#include <stdio.h>

int main()
{
    float C, F;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &F);

    //C = (feren - 32) * 5 / 9;

    C=(5.0/9.0)*(F-32.0);

    printf("After converting to Celsius, the temperature is %f\n", C);

    return 0;
}
