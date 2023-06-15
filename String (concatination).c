#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100],str3[300],str4[300];
    int i=0,j=0;
    printf("Enter the first String:");
    gets(str1);
    printf("Enter the Second String:");
    gets(str2);
    while(str1[i]!='\0')
    {
        str3[j]=str1[i];
        j++;
        i++;
    }
    i=0;
        while(str2[i]!='\0')
    {
        str3[j]=str2[i];
        j++;
        i++;
    }
    str3[j]='\0';
    printf("The concatinated String is:");
    puts(str3);
    // puts(strrev(str3));
    
    i=0;
    j=strlen(str3)-1;

while (j>=0)
{
    str4[i]=str3[j];
    j--;
    i++;
}
puts(str4);
}