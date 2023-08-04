#include<stdio.h>

int main(){

    int a,b,c,p,area;

    printf("First side:");
    scanf("%d",&a);

    printf("Second side");
    scanf("%d",&b);

    printf("Third side");
    scanf("%d",&c);

    p = a+b+c;

    printf("Perimeter of Triangle :%d",p);

    area = p*(p-a)*(p-b)*(p-c);

    printf("\nArea of Triangle :%d",area);

    return 0;

    














}