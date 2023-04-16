#include <stdio.h>

void sort_descending(int *arr, int n);

int main() {
    int arr[5];
    int *ptr;
    int i;

    printf("Enter five numbers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    sort_descending(ptr, 5);

    printf("Sorted array in descending order: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}

void sort_descending(int *arr, int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(arr + j) > *(arr + i)) {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}
