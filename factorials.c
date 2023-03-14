#include<stdio.h>
int fact(int x);
int main()
{
    int n,result;
    printf("enter the number:");
    scanf("%d",&n);
    result=fact(n);
    printf("%d",result);
    return 0;


}
int fact(int x)
{
    if (x==0)
    return 1;
    else
    return x*fact(x-1);
}
