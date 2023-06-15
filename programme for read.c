#include<conio.h>
#include<stdio.h>
struct student
{
    int rollno;
    char name[20];

};

void main()
{
    struct student st;
    FILE *fptr;
    fptr=fopen("d.txt","r");
    fread(&st,size of(st),1,fptr);
    printf("roll no is %d",st.rollno);
    printf("name is %s",st.name);
    fclose(fptr);
}
