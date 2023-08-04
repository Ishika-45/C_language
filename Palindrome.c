#include<stdio.h>

int main(){
    int num,a,n,b,c;

    printf("Enter a Number : ");
    scanf("%d",&num);

    a = num % 10 * 10;
    n = num/10;
    b = (n%10+a)*10;
    c = b+n/10;

    if(c == num){
        printf("PALINDROME");
    }else{
        printf("NOT PALINDROME");
    }
    return 0;

}