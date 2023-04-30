#include<stdio.h>
#include <string.h>
int main()
{
    char str1[15],str2[15];
    int n;
    printf("\nEnter first string:");
    gets(str1);
    printf("\nEnter second string:");
    gets(str2);
    printf("\nEnter the number of char you want to concatenate:");
    scanf("%d",&n);
    strncat(str1,str2,n);
    printf("\nString after concatination is:%s",str1);
    return 0;
}