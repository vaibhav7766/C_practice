#include <stdio.h>

int main() {
    char str[100];
    char *ptr;
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    ptr = str;

    while (*ptr != '\0') {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u'
            || *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U') {
            vowels++;
        }
        else if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z')) {
            consonants++;
        }
        ptr++;
    }

    printf("Number of vowels in the string: %d\n", vowels);
    printf("Number of consonants in the string: %d\n", consonants);

    return 0;
}
