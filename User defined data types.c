#include<stdio.h>

// struct car
// {
//     char *name;int seats;float price;
// };

// int main()
// {
//     struct car mycar;
//     mycar.name="renault";
//     mycar.price=50000000;
//     mycar.seats=2;
//     printf("%s\n%f\n%d ", mycar.name,mycar.price, mycar.seats);
// }


// wap to ask the user to enter the record of one student using structure

// struct details
// {
//    char *name;int rollno; float cgpa;
// };

// int main()
// {
//     struct details student;
//     student.name=n
//     student.rollno=no
//     student.cgpa=grade
//     printf("%s %f %d \n", student.name,student.cgpa,student.rollno);
// }



// wap to ask the user to enter the record of five student using structure

struct details
{
   char *name;int rollno; float cgpa;
};

int main()
{
int i,no;float cgpa;char *n;
for(i=0;i<5;i++)
{
    printf("enter the student name\n");
    scanf("%s",&n);
    printf("enter the student roll number\n");
    scanf("%d",&no);
    printf("enter the student cgpa\n");
    scanf("%f",&cgpa);
        struct details student;
        student.name=n
        student.rollno=no
        student.cgpa=grade
        printf("%s %f %d \n", student.name,student.cgpa,student.rollno);
    
}
}
