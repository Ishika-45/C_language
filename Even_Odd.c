#include<stdio.h>

int main(){
    int a;

    printf("Enter a Number :");
    scanf("%d",&a);

    if(a%2==0)
    printf("Number is EVEN");

    else
    printf("Number is ODD");

    return 0;
}