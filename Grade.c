#include<stdio.h>

int main (){

    int marks;

    printf("Enter your Marks :");
    scanf("%d",&marks);

    if(marks >= 90){
        printf("A+\n");
        printf("Oustanding Performance");
    
    }
    else if(70 <= marks && marks < 90){
        printf("A\n");
        printf("Excellent");
    }
    else if (30 <= marks && marks < 70){
        printf("B");
        printf("\n Need Improvement");
    }
    else{
        printf("C\n");
        printf("FAIL");
}
return 0;

}