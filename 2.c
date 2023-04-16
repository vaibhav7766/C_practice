#include <stdio.h>

int main(){
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    int* p1=&a;
    int* p2=&b;
    printf("Addition of given numbers is %d",*p1+*p2);
    return 0;
}