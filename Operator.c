#include<stdio.h>

int main(){

    //increment operator
    // ++i  pre increment
    // i++  post increment

    int i = 5;
    printf("%d\n",i++);  //use, then  increase
    printf("%d \n",i);

    printf("BREAK\n");

    int k = 10;
    printf("%d\n",++k);  //increase,then use
    printf("%d\n",k);

    // j--   post decrement
    // --j   pre decrement

    printf("BREAK\n");

    int j = 15;
    printf("%d\n",j--);       //use,then decrease
    printf("%d\n",j);

    printf("BREAK\n");

    int l = 20;
    printf("%d\n",--l);      //decrease,then use
    printf("%d",l);

    return 0;
}