#include<stdio.h>

int main(){

    int age;

    printf("Enter Your AGE:");
    scanf("%d",&age);

    if(age>=18){

        printf("You are ADULT\n");
        printf("You can VOTE\n");
        printf("You can DRIVE");

    }

     else if(13>age<18){
        printf("Yor are TEENAGER");

    }
    else{
        printf("Yor are CHILD");
    }

    return 0;

}