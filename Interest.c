#include<stdio.h>

int main(){

    int p,r,n,t,A;

    printf("Initial Amount :");
    scanf("%d",&p);

    printf("Interest rate :");
    scanf("%d",&r);

    printf("Number of times interest applied :");
    scanf("%d",&n);

    printf("Number of time period ellapsed :");
    scanf("%d",&t);

    A = p*(1+r/n)^n*t;

    printf("Compund Interest :%d",A);

    return 0;
}