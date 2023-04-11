#include<stdio.h>
struct student
{
    char *name;
    int seat;
    float price;
};

int main()
{
    int i;
    struct car *mycar;
    for (i=0;i<100;i++)
    {
        printf("\n\nEnter the data for car[%d]:",i);
        scanf("%s %d %f",&mycar[i].name,&mycar[i].seat,&mycar[i].price);
    }

     for (i=0;i<100;i++)
    {
        printf("\nthe data for car[%d] is %s %d %f",i,mycar[i].name,mycar[i].seat,mycar[i].price);
        
    }

    return 0;
}