#include<stdio.h>

int main(){

    for(int i = 0;i<=10;i++){
    printf("%d. Hello World \n",i);
    
    }
    int j=5;
    while(j<=10){
        printf("%d.Hello World\n",j);
        j++;
    }
    
    int k = 10;
    do{
        printf("%d.Hello World\n",k);
        k--;
    }while(k>=1);

    return 0;
}