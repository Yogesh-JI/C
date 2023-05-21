#include<stdio.h>
int main()
{
    int var1=60,var=70;
    int *const ptr=&var1;
    printf("%d",*ptr);
    // ptr=&var2;
    // printf("\n%d",*ptr);
    return 0;
}