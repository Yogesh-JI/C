#include<stdio.h>
void void(int);
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
    printf("\npassing elements by value:");
    for(i=0;i<n;i++)
    {
        value (arr[i]);

    }
}

void value(int u)
{
    printf("%d",u)
}
