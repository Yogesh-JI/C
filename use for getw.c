#include<conio.h>
#include<conio.h>
void main()
{
        FILE *fptr;
    int i,n;
    fptr=fopen("b.txt","r");
    printf("The number are");
    for (i=1;i<=10;i++)
    {
        
        n=getw(fptr);
        printf("%d\t",n);
      
    }
    fclose(fptr);
}

