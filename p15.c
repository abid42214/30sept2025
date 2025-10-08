#include<stdio.h>
int main ()
{
    char letter;
    printf("enter the letter");
    scanf(" %c",&letter);
    if(letter == 'a' || letter == 'e' || letter == 'i' ||
        letter == 'o' || letter == 'u' ||
        letter == 'A' || letter == 'E' || letter == 'I' ||
        letter == 'O' || letter == 'U')
       {
            printf("its a vowel");

    }
    else{
         printf("its not a vowel");

    }

    return 0;
}
