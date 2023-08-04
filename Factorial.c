#include<stdio.h>

int main(){

    int n;

    printf("Factorial of: ");
    scanf("%d",&n);

    int fact = 1;

    for(int i = 1; i<=n; i++){

        fact = fact*i;
          printf("Factorial: %d\n",fact);
    }
    return 0;

}