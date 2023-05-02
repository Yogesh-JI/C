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
    strcat(str1,str2);
    printf("\nString after concatination is:%s",str1);
    return 0;
}