#include<stdio.h>
int a=1;
void print();
int main()
{
    printf("\nValue of a is: %d",a);
    print();
    return 0;

}
void print()
{
    printf("\nthe value of a is %d",a);
}