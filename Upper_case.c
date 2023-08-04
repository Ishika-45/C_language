#include<stdio.h>

int main (){

    char letter;

    printf("Enter a Alphabet : ");
    scanf("%c",&letter);

    if(letter >= 'a' && letter <= 'z'){
        printf("Letter is LowerCase");
    }
    else if(letter >= 'A' && letter <= 'Z'){
        printf("Letter is UpperCase ");
    }
    else{ ("Not a English Alphabet");
    }

    return 0;



}