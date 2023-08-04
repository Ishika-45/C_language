#include<stdio.h>

int main(){

    int a,s,d,calc;

    printf("Enter the First Number : \n");
    scanf("%d",&a);

    printf("Enter the Second Number :");
    scanf("%d",&s);

    printf("Enter 1 for Addition \n");
    printf("Enter 2 for Subtraction \n");
    printf("Enter 3 for Multiplication \n");
    printf("Enter 4 for Division \n");

    printf("Enter your Choice :");
    scanf("%d",&calc);

    switch(calc){
    case 1: 
              d = a + s;
            
    break;

    case 2: 
              d = a - s;
            
    break;

    case 3: 
             d = a * s;
            
    break;

    case 4:
             d = a / s;
            
    break;

    default: printf("Not a valid option");
    }
    printf(" %d",d);
    return 0;
}    