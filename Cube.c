#include<stdio.h>

int main(){
    int side,cube;

    printf("Side of Cube is :");
    scanf("%d",&side);

    cube = side*side*side;

    printf("Cube : %d",cube);

    return 0;
}