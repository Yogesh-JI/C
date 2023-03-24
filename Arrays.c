#include<stdio.h>
int main()
{
int n,a[100],i;
printf("\nEnter the numbers of the elements: ");
scanf("\n%d",&n);
printf("\Eenter array elements:\n");
for (i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}


printf("\nEntered array elements are");
for (i=0;i<n;i++)
{
     printf("\n%d",a[i]);
}
}