#include <stdio.h>
#include <conio.h>
int main()

{
	int n,k;
	printf("enter the number: ");
	scanf("%d",&n);
	for (k=n;k>0;k-=1)
	{
		printf("\n%d",k);
	}
}
