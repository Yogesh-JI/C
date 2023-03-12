#include<stdio.h>
void  cubeByreference (int n); //function prototype

int main(void)
{
    int number=5;
    printf("the riginal value of the number is %d",number);
    cubeByreference (&number);    //pass the address of the number
    printf("\nthe new value of number is %d\n",number);
}  //end main


//calculate cube of nptr.actually modifies number in main.
void cubeByreference  (int *nptr)
{
     *nptr=*nptr * *nptr * *nptr;
    
}