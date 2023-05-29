#include<stdio.h>
union employee
{
    char name[30];
    int id;
    float salary;
}u[100];

int main()
{
    //union employee[100]
    int n,i;
    printf("\nenter the value of n:");
    scanf("%d",&n);
    fflush(stdin);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the name:");
        fflush(stdin);
        gets(u[i].name);
        printf("\n entered name is:%s",u[i].name);
        printf("\nEnter id:");
        fflush(stdin);
        scanf("%d",&u[i].id);
        printf("\nentered id is:%d",[i].id);
        printf("\nEnter salary:");
        fflush(stdin);
        scanf("%f",&u[i].salary);
        printf("\nentered salary is:%.2f",[i].salary);
    }
}