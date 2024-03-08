#include<stdio.h>
#include<math.h>
int fact(int a)
{
    int ans=1;
    if (a==0)
    return 1; 
    return a*fact(a-1);
}
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("Factorial of given number is :%d",fact(n));
}