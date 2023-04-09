#include<stdio.h>
struct student
{
    char *name;
    int roll;
    float marks;
    int age;

};

int main()
{
    struct student s,s1;
    printf("Enter information of first student:\n");
    printf('enter name:');
    scanf("%s",&s.name);
    printf("enter roll number:");
    scanf("%d",&s.roll);
    printf("Enter marks:");
    scanf("%f",&s.marks);
    printf("Enter age:");
    scanf("%f",&s.age);



     
    printf("Enter information of second  student:\n");
    printf('enter name:');
    scanf("%s",&s1.name);
    printf("enter roll number:");
    scanf("%d",&s1.roll);
    printf("Enter marks:");
    scanf("%f",&s1.marks);
    printf("Enter age:");
    scanf("%f",&s1.age);

    if (s.marks>s1.marks)
    {
        printf("marks of first student are high");
    }
    else
    {
        printf("marks of second student are higher");
    }

}
  
  
