#include<stdio.h>
#include<string.h>
struct Student
{
    char name[30];
    char roll_no[10];
    int total_marks;
};
void disp(struct Student *s){
    printf("%s\n",s->name);
    printf("%s\n",s->roll_no);
    printf("%d\n",s->total_marks);
}
void accept(struct Student *s){
    printf("Enter Student Name: \n");
    scanf("%s",s->name);
    printf("\n");
    printf("Enter a roll_no of Student :\n");
    scanf("%s",s->roll_no);
    printf("Enter a marks of Student :\n");
    scanf("%d",&s->total_marks);
}

int main()
{
    struct Student e1;
    accept(&e1);    
    disp(&e1);
}