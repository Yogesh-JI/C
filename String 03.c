#include<stdio.h>
#include <string.h>
int main()
{
    char str1[15],str2[15];
    int n;
    printf("\nEnter source string:");
    gets(str1);
    printf("\nEnter the destination string:");
    gets(str2);
    printf("\nEnter the number of chsracters to be copied:");
    scanf("%d",&n);
    strncpy(str1,str2,n);
    puts(str1);
}