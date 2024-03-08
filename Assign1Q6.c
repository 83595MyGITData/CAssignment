#include<stdio.h>
int main()
{
    int arr[2][2]={1,2,3,4},arr1[2][2]={2,2,2,2},arr2[2][2];
    for (int i = 0; i <=1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            arr2[i][j]=arr[i][j]*arr1[i][j];
        }
        
    }
    for (int i = 0; i <=1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
}