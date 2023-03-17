#include<stdio.h>
void first();
int  main()
{
    extern int a;
    printf("\na=%d",a);
    first();
    printf("\na=%d",a);

}
void first()
{
    extern int a;
    printf("\na=%d",a);
    a=a+10;

}
int a=10;  //definition of external variable


