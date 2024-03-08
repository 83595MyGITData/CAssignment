#include<stdio.h>
int fibo(int n){
int a1=0,a2=1,a3;
printf("%d\t%d\t",a1,a2);
for (int i = 2; i < n; i++)
{
    a3=a1+a2;
    printf("%d\t",a3);
    a1=a2;
    a2=a3;
    printf("\n");
}

}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    fibo(n);
}