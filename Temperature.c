#include<stdio.h>

int main(){

    int celsius,fahrenheit;

    printf("Temperature in Celsius :");
    scanf("%d",&celsius);

    fahrenheit = (celsius*9/5)+32;

    printf("Temperature in fahrenheit :%d",fahrenheit);
}