#include<stdio.h>
struct student
{
    char *name;
    int roll;
    float marks;

};

int main()
{
    struct student s,s1;
    printf("enter information:\n");
    printf("enter name:");
    scanf("%s",&s.name);
    printf("enter roll number:");
    scanf("%d",&s.roll);
    printf("Enter marks:");
    scanf("%f",&s.marks);
    s1=s;

    printf("Displaying the information");
    printf("Name:%s",s1.name);
    printf("Roll number:%d\n",s1.roll);
    printf("Marks:%f\n",s1.marks);
}
