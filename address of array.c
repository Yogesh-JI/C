#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int i;
    printf("\nprinting base address of the array");
    printf("\n%u %u %u",&a[0],a,&a);
    printf("\nprinting address of all the elements of the array");
    for (i=0;i<5;i++)
    {
        printf("\n%u",&a[i]);
    }
}