#include<stdio.h>
#include<conio.h>

int main()
{
	int i;
	for(i=1;i<=3;i+=1)
	{
		
		for(j=1;j<=5;j+=1)
		{
			if(j==2)
			{
				continue;
			}
			
		}
		printf("%d\n",j);
	}
}
