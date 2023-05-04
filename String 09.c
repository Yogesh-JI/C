#include<stdio.h>
#include <string.h>
int main()
{
    // char str[]='h','e','l','l','o';
    char str[]="hello";
    printf("\nLength of given string is:%d",strlen(str));

    // >>------------------------------------------------------
    printf("\n%s",strrev(str));

    // >>------------------------------------------------------
    strlwr(str);
    puts(str);

    strupr(str);
    puts(str);
}