#include<stdio.h>

int main(){

    int a,b,c;

    printf("Enter First Number");
    scanf("%d",&a);

    printf("Enter Second Number");
    scanf("%d",&b);

    printf("Enter Third Number");
    scanf("%d",&c);

    if(a>>b && a>>c)
    printf("A is Largest");

    else if (b>>c && b>>a)
    printf("B is Largest");

    else (c>>a && c>>a);
    printf("C is Largest");

    return 0;
}