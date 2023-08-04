#include<stdio.h>

int main(){

    int marks;

    printf("Enter your Marks");
    scanf("%d",&marks);

    if(marks>30){
        printf("You are PASS");
    }else{
        printf("You are FAIL");
    }
    return 0;
}