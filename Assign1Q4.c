#include<stdio.h>
float avg(int *arr,int s);
void grade(float p);
int AcceptData()
{
    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter marks of 5 subjects %d: \n",i+1);
        scanf("%d",&arr[i]);
    }
    float average =avg(arr,5);
    return average;
}
float avg(int *arr,int s){
int sum=0;
for (int i = 0; i <s; i++)
{
    sum=sum+arr[i];
}
float average=sum/5;
grade(average);
return average;
}
void grade(float p)
{
    printf("Grade");
    (p>=90)?printf("Ex\n"):p>=80?printf("A\n"):p>=70?printf("B\n"):p>=60?printf("C\n"):printf("D\n");
}
int main()
{
   float value =AcceptData(); 

   printf("AVerage of this marks :%f",value);
   return 0;
}