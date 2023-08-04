#include<stdio.h>

int main (){

    int l,b,perimeter,area;

    printf("The Length if Rectangle is :");
    scanf("%d",&l);

    printf("The Breadth of Rectangle is :");
    scanf("%d",&b);

    perimeter = (l+b)/2;
    printf("The Perimeter of Rectangle is :%d",perimeter);

    area = l*b;

    printf("\nThe Area of Reactangle is :%d",area);

    return 0;
}