#include<stdio.h>

struct employee
{
    char name[10];
    char lastname[10];
    double salary;

};

void init(struct employee *emp)
{
    printf("Enter your name : ");
    scanf("%s",emp->name);
    printf("Enter your last name : ");
    scanf("%s",emp->lastname);
    printf("Enter your salary : ");
    scanf("%lf",&emp->salary);
}

void display(struct employee *emp)
{
    printf("Name - %s \n",emp->name);
    printf("Lastname - %s \n",emp->lastname);
    printf("salary - %lf \n",emp->salary);
}

void Salary(struct employee *emp,double sal)
{
    emp->salary=sal;
}

int main()
{
    struct employee e1;

    init(&e1);
    display(&e1);
    Salary(&e1,15000);
    display(&e1);

    return 0;
}
