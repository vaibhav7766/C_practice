#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, max, i;
    arr = (int *)malloc(5 * sizeof(int));
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("The largest number is %d", max);
    free(arr);

    return 0;
}
