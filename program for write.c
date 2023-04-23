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
    // fread(&st,size of(st),1,fptr);
    printf("Enter roll no")
    scanf("%d",&st.rollno);
    printf("Enter name")
    gets(st.name);
    fwrite(&st,size of(st),1,fptr);
    fclose(fptr);
    return 0;
}
