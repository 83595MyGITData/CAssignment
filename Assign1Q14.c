#include<stdio.h>
#include<string.h>

int main()
{
    char str[10];
    printf("Enter string : ");
    scanf("%s",str);
    int len,flag=0;
    len = strlen(str); 

    for(int i=0;i<len;i++)
    {
        if(str[i]!=str[len-i-1]
        {
            flag=1;
        }
    }
    if(flag==0)
        printf("Number is Palindrome \n");
    else
        printf("Number is not Palindrome \n");

    return 0;
}