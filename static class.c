#include<stdio.h>
void function();
int main()
{
    function();
    function();
    function();
    return 0;
}
void function()
{
    int a=10;
    static int b=10;
    printf("\nthe value of a is %d,value of b is %d",a,b);
    a++;
    b++;
}