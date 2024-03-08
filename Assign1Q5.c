#include<stdio.h>
int main(){
    char ch;
    printf("Enter a Character:\n");
    scanf("%c",&ch);
    if (65<=ch&&90>=ch)
    {
        printf("Upper case Character");
    }
    else if (ch>=97&&ch<=122)
    {
        printf("Lower case Character");
    }
    else if (ch>=48&&ch<=57)
    {
        printf("Digit");
    }
    else
    printf("Special Character");
}