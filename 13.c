#include <stdio.h>

int main() {
    char str1[100], str2[100];
    char *ptr1, *ptr2;

    printf("Enter the string to be copied: ");
    scanf("%s", str1);

    ptr1 = str1;
    ptr2 = str2;

    // Copy the first string to the second string using pointer arithmetic
    while (*ptr1 != '\0') {
        *ptr2 = *ptr1;
        ptr1++;
        ptr2++;
    }

    // Add null terminator to end of second string
    *ptr2 = '\0';

    printf("Copied string: %s\n", str2);

    return 0;
}
