#include<stdio.h>
int cubebyvalue (int n);
int main(void)
{
    int number=5;
    printf("the riginal value of the number is %d",number);
    cubebyvalue (number);
    printf("\nthe new value of number is %d\n",number);
}
int cubebyvalue (int n)
{
     return n*n*n;
    
}