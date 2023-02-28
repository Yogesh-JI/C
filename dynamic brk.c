//wap to start the loop from 1 to 100 and ask the user upto which number the user wnats to print the value
#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j;
	printf("enter the number up to which you want the output:  ");
	scanf("%d",&j);
	for(i=1;i<=100;i+=1)
	{
		printf("%d\n",i);
		if(i==j)
		{
			break;
		}
	}
}
