#include<stdio.h>
int main(int argc, int *argv[]){
    int a,i=1;
    a=atoi(argv[1]);
    printf("Table of %d is:\n",a);
    while (i<=10)
    {
        printf("%d\n",a*i);
        i++;
    }
    
}
