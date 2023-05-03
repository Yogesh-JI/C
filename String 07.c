#include<stdio.h>
#include <string.h>
int main()
{
    char str1[15],str2[15];
    int x,n;
    printf("\nEnter first string:");
    gets(str1);
    printf("\nEnter second string:");
    gets(str2);
    printf("\nEnter the number of char to be compared:");
    scanf("%d",&n);
    x=strncmp(str1,str2,n);
    if (x==0)
    {
        printf("String are equal.");
    }
    else if(x>0)
    {
         printf("The first string is greater than second string.");
    }
    else
    {
        printf("The first string is lesser than second string.");
    }
    return 0;
}
