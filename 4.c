#include <stdio.h>
#include <stdlib.h>

int main(){
    char s[100];
    int len=0;
    char* p;
    printf("Enter a string: ");
    gets(s);
    p=s;
    while(*p!='\0'){
        len++;
        p++;
    }
    printf("The length of the string is %d", len);

    return 0;
}