#include <stdio.h>

int main() {
    int arr[5];
    for(int j=0; j<5; j++){
        scanf("%d", &arr[j]);
    }
    int *ptr;
    int sum = 0;
    int i;

    ptr = arr;

    for (i = 0; i < 5; i++) {
        sum += *(ptr + i);
    }

    printf("Sum of all elements in the array: %d\n", sum);

    return 0;
}