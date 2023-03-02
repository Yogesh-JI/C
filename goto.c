#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j;
	for(i=1;i<=5;i+=1)
	{
		if (i==3)
		{
			goto there;
		}
		printf("%d\n",i);
		
	}
	there:
	    printf("two");
	    prinf("table of two")
	    for (j=1;j<=10;j++)
		{
			printf("%d",2*j)
		}
}
