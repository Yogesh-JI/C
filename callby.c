// --------------call by reference
#include<stdio.h>
int cubebyvalue (int n);
int main()
{
    int number=5;
    // int *ptr=&number;
    printf("the original value of the number is %d",number);
    cube (&number);
    printf("\nthe new value of number is %d\n",number);
}
int cube (int *n)
{
     return *n+=1;
    
}

// void swap(int x, int y)
// {
// int temp;
// temp=x;
// x=y;
// y=temp;
// }
// void main()
// { 
// int r=10, v=20; 
// swap(r, v);  // passing value to function
// printf("\nValue of r: %d",r);
// printf("\nValue of v: %d",v);
// } 


// void swap(int *x, int *y)
// {
// int temp;
//  temp=*x;
// *x=*y;
// *y=temp;
// }
// void main()
// { 
// int r=10, v=20; 
// swap(&r, &v);  // passing value to function
// printf("\nValue of r: %d",r);
// printf("\nValue of v: %d",v);
// }