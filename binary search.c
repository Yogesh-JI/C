// #include<stdio.h>
int main()
{
    int a[100],loc=-1,key,beg,last,n,c;
    printf("enter number of elements in array:\n");
    scanf("%d",&n);
    printf("enter %d elements:\n",n);
    for (c=0;c<n;c++)
    {
        scanf("%d",&a[c]);
    }
    beg=0;
    printf("enter the integer value to search in sorted array:");
    scanf("%d",&key);
    while(beg<=last)
    {
        int mid=beg+last;
        if(a[mid]==key)
        {
            loc=mid;
            break;
        }
        else if(a[mid]>key)
        {
            last=mid-1;
        }
        else if(a[mid]<key)
        {
            beg=mid+1;
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
