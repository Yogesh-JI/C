// #include<stdio.h>
// int main()
// {
//     int x=10;
//     char ch='A';
//     void *gp;
//     gp=&x;
//     printf("generic pointer points to the integer value=%d",*(int*)gp);
//     gp=&ch;
//     printf("\ngeneric pointer now points to the character %c",*(char*)gp);
//     return 0;
// }

// ----------------------------------------------------------------------------
#include<stdio.h>
#include<conio.h>
int main()
{
    int n=1;
    int *ptr=(int*)malloc(n*sizeof(int));
    *ptr=6;
    printf("%d",*ptr);
    printf("\n%d",ptr);
    free(ptr);
    printf("\n%d",ptr);
    ptr=NULL;
    printf("\n%d",ptr);
// return 0;
}