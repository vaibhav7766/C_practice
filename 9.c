#include <stdio.h>

int main() {
    char str[100];
    char *ptr;
    char temp;
    int i, len;

    printf("Enter a string: ");
    gets(str);

    ptr = str;

    // Find the length of the string
    len = 0;
    while (*(ptr + len) != '\0') {
        len++;
    }

    // Reverse the string using pointers
    for (i = 0; i < len / 2; i++) {
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + len - i - 1);
        *(ptr + len - i - 1) = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
