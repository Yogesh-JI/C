// #include<stdio.h>
// int main()
// {
//     int a[100],hold,c,j,n;
//     printf("enter number of elements in array:\n");
//     scanf("%d",&n);
//     printf("enter %d elements:\n",n);
//     for (c=0;c<n;c++)
//     {
//         scanf("\n%d",&a[c]);
//     }

//     printf("data items in original order:\n");
//     for (c=0;c<n;c++)
//     {
//         printf("%d",a[c]);
//     }

//      for (c=0;c<n-1;c++)
//      {
//          for (j=0;j<n+1;c++)
//          {
//             if (a[j]>a[j+1])
//             {
//                 hold=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=hold;
//             }
//          }
//      }
//     printf("\ndata items in ascending order are");
//     for (c=0;c<n;c++)
//     {
//         printf("\n%d",a[c]);
//     }
// }


// wap to ask the user to enter any 10 random numbers sort them in descending order


// #include<stdio.h>
int main()
{
    int a[100],hold,c,j,n;
    printf("enter number of elements in array:\n");
    scanf("%d",&n);
    printf("enter %d elements:\n",n);
    for (c=0;c<n;c++)
    {
        scanf("%d",&a[c]);
    }

    printf("data items in original order:\n");
    for (c=0;c<n;c++)
    {
        printf("%d ",a[c]);
    }

    for (c=0;c<n-1;c++)
    {
        for (j=0;j<n+1;c++)
        {
            if (a[j]<a[j+1])
            {
                hold=a[j+1];
                a[j+1]=a[j];
                a[j]=hold;
            }
        }
    }
    printf("\ndata items in ascending order are");
    for (c=0;c<n;c++)
    {
        printf("\n%d",a[c]);
    }
}
