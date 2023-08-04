#include<stdio.h>

int main(){

    int r;
    float area;
    float pi = 3.14;

    printf("Radius of Circle is :");
    scanf("%d",&r);

    area = pi*r*r;

    printf("Area of circle is :%f",area);

    return 0;

}