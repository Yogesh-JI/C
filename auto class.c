#include<stdio.h>
void fun1()
{
    auto int a=10;
    printf("\na=%d",a);

}
void fun2()
{
    auto int a=20;
    printf("\na=%d",a);
}
int main()
{
    auto int a=30;
    fun1();
    fun2();
    printf("\na=%d",a);

    return 0;
}
