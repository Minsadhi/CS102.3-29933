#include <stdio.h>

int main () {

    int size;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    printf("\n");

    int arr1[size];
    int arr2[size];
    int result[size];
    int scalar_products;

    printf("Enter the values for array 01:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter value for array 01 [%d]: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("\n");

    printf("Enter the values for array 02:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter value for array 02 [%d]: ", i);
        scanf("%d", &arr2[i]);
    }

    printf("\n");

    printf("Vector Product\n");
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] * arr2[i];

        printf("Array 01 [%d] * Array 02 [%d] = %d\n", i, i, result [i]);
    }

    printf("\n");

    printf("Scalar Product\n");
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] * arr2[i];
        scalar_products += result[i];
    }
    printf("Scalar Product: %d\n", scalar_products);

    return 0;
}