#include<stdio.h>
#include<conio.h>

int main()
{
	int i;
	for(i=1;i<=15;i+=1)
	{
		printf("%d\n",i);
		if(i==10)
		{
			break;
		}
	}
}
