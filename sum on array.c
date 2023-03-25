#include<stdio.h>
int main()
{
    int a[100],n,i,sum=0;
    
    printf("\nEnter the numbers of the elements: ");
    scanf("\n%d",&n);
    printf("Eenter array elements:\n");
    for (i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
// printf("\nEntered array elements are");
for (i=0;i<n;i++)
{
     sum=sum+a[i];
}
printf("\nsum of array elements is: %d",sum);
}