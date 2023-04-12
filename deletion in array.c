#include<stdio.h>
int main()
{
    int array[100],position,c,n,value;
    printf("enter number of elements in array:\n");
    scanf("%d",&n);
    printf("enter %d elements:\n",n);
    for (c=0;c<n;c++)
    {
        scanf("%d",&array[c]);
    }
    printf("enter the location where you wish to delete the element:\n");
    scanf("%d",&position);
    for(c=position-1;c<n-1;c--)
    {
        array[c]=array[c+1];
    }
      for (c=0;c<=n;c++)
    {
        printf("%d\n",array[c]);
    }
}
