#include<stdio.h>
int main()
{
    int a[50];
    int i,loc=-1,key,n;
    printf("enter value of n:");
    scanf("%d",&n);
    printf("enter the elements:");
    for (i=0;i<n;i++)
    {
        scanf("%d"&a[i]);

    }
    printf("Enter the integer value to search in array: ");
    scanf("%d",&key);
    for (i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            loc=i;
            break;
        }
    }
    if(loc!=-1)
    {
        printf("element found at %d",loc+1);
    }
    else
    {
        printf("element not found");
    }
}
