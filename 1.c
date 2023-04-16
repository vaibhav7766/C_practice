#include <stdio.h>

int main(){
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    int* p1=&a;
    int* p2=&b;
    if(*p1>*p2){
        printf("%d is larger number.",*p1);
    }
    else if(*p1<*p2){
        printf("%d is larger number.",*p2);
    }
    else{
        printf("Both are equal.");
    }
    return 0;
}