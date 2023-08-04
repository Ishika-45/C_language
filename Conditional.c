#include<stdio.h>

int main(){
    int num;

    printf("Enter a Number :");
    scanf("%d",&num);

    if(num>=0){
        printf("Positive \n" );
        if(num % 2 == 0){
            printf("Num is EVEN");
        }
        else{
            printf("Num is ODD");
        }
    }
    else {
        printf("Negative");
    }
    return 0;
}