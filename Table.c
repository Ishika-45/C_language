#include<stdio.h>

int main(){

    int n,a,b;

    printf("Enter the Number: ");
    scanf("%d",&n);

    printf("\nEnter the Limit: ");
    scanf("%d",&b);

    for(int i=1; i<=b; i++){

        a = n*i;

        printf("%d*%d=%d\n",n,i,a);
    }
    return 0;
}    