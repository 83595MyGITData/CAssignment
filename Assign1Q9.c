#include<stdio.h>
int binary(int n);
int octal(int n);
int hexa(int n);
int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int m=binary(n);
    printf("\n");
    int k=octal(n);
    printf("\n");
    hexa(n);
}
int binary(int n)
{
    if(n==0)
        return 1;
    /*
    else{
    while (n>=1)
    {
        i=n%2;
        n=n/2;
        printf("%d",i);// we have to revers for this logic
    }
    } */
    
    binary(n/2);
    printf("%d",n%2);
}
int octal(int n){
    if (n==0)
    return 1;
    octal(n/8);
    printf("%d",n%8); 
}
int hexa(int n){
    if (n==0)
    return 1;
    hexa(n/16);
    printf("%d",n%16); 
}