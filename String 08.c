// It will also compare the upper and lower case of characters
#include<stdio.h>
#include <string.h>
int main()
{
    char str1[15],str2[15];
    int x;
    printf("\nEnter first string:");
    gets(str1);
    printf("\nEnter second string:");
    gets(str2);
    x=stricmp(str1,str2);
    if (x==0)
    {
        printf("String are ewual.");
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
