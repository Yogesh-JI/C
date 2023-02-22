#include <stdio.h>
#include <conio.h>
int main()

{
	int n,i=1;
	printf("enter the number: ");
	scanf("%d",&n);
	
	while(i<11)
	{
		printf("\n%d*%d=%d",n,i,(n*i));
		i+=1;
	}
}
