#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    int *aptr;
    a=7;
    aptr=*a;
    printf("the address of a is %p. the value of aptr is %p",&a,aptr);
    printf("the value of a is %d. the value of *aptr is  %d",a,*aptr);
    printf("showing that * and & are compolements of each other \n&*aptr=%p \n*&aptr=%p",&*aptr,*&aptr);
    return 0;
}