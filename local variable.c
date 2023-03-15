#include<stdio.h>
void function();
int main()
{
    int a=1,b=2;
    printf("\na is %d and b is %d",a,b);
    function();
    return 0;

}
void function()
{
    int c=3;
    printf("\nvalue of c is %d",c);
}

//when we have same named local and globsl vaiable the priority is always given to the local variable 