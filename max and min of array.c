#include<stdio.h>
int main()
{
int n,a[10],i,max,min;
printf("\nEnter the numbers of the elements: ");
scanf("\n%d",&n);
// printf("Eenter array elements:\n");
for (i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

min=a[0];
for (i=0;i<n;i++)
{
    if(a[i]<min)
    {
        min =a[i];
    }
}
max=a[0];
for (i=0;i<n;i++)
{
    if(a[i]<max)
    {
        min =a[i];
    }
}
printf("\nthe maximum number is: %d",max);
printf("\nthe minimum number is: %d",min);
}