#include<stdio.h>

int main(){

   int n;

    printf("Enter the Number: ");
    scanf("%d",&n);

    for(int i = 1; i<=n; i++){

        if( i % 7 == 0){
           
           printf("Multiple of 7%d\n",i);
        }
       
    }
    return 0;
}