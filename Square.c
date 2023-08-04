#include<stdio.h>

int main(){
    int side,perimeter,area;

    printf("The side of square is");
    scanf("%d",&side);

    perimeter = 4*side;
    printf("Perimeter of sqaure is :%d",perimeter);

    area = side*side;

    printf("Area of Square is : %d", area);

    return 0;
 
}