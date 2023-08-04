#include<stdio.h>

int main(){

    int num,a,n,b,c;

    printf("Enter a 3-digit Number");
    scanf("%d",&num);                 

    a = num%10;
    n = num/10;
    b = n%10;
    n = n/10;
    
    c = (a*a*a)+(b*b*b)+(n*n*n);

    if(num == c){
        printf("Number is ARMSTRONG");
    }else{
        printf("Number is NOT ARMSTRONG");
    }
return 0 ;

}