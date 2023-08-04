#include<stdio.h>

int main(){
     int a,b,c,d;

     printf("Enter First Number");
     scanf("%d",&a);

     printf("Enter Second Number");
     scanf("%d",&b);

     printf("Enter Third Number");
     scanf("%d",&c);

     d = (a+b+c)/3;

     printf("Average of Three Numbers %d",d);

     return 0 ;
}