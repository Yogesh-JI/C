#include<stdio.h>
void reference(int[],int);
int main()
{
    int arr[100],n;
    int i;
    printf("\n enter n: ");
    scanf("%d",&n);
    printf("\nenter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nelements by reference");
    reference(arr,n);
}

void reference(int x[],int size)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d",x[i]);
    }
}