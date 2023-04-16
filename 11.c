#include <stdio.h>

int main() {
    char str1[100], str2[100];
    char *ptr1, *ptr2;
    int i, len1, len2;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    ptr1 = str1;
    ptr2 = str2;

    // Find the length of the first string
    len1 = 0;
    while (*(ptr1 + len1) != '\0') {
        len1++;
    }

    // Find the length of the second string
    len2 = 0;
    while (*(ptr2 + len2) != '\0') {
        len2++;
    }

    // Concatenate the second string onto the end of the first string
    for (i = 0; i < len2; i++) {
        *(ptr1 + len1 + i) = *(ptr2 + i);
    }

    // Add null terminator to end of concatenated string
    *(ptr1 + len1 + i) = '\0';

    printf("Concatenated string: %s\n", str1);

    return 0;
}
