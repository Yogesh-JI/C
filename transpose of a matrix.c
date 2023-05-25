#include<stdio.h>
#include<conio.h>
int main()
{
	float a[3][3],b[3][3],c[3][3];
	int i,j;
	printf("Enter the elements of 1ST matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the %d%d: ",i,j);
			scanf("%i",&a[i][j]);
		}
	}


	printf("Enter the elements of 2nd matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the %d%d: ",i,j);
			scanf("%i",&b[i][j]);
		}
	}
	//adding the matrix
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++);
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	//display the sum
	// for(i=0;i<3;i++)
	// {
	// 	for(j=0;j<3;j++)
	// 	{
	// 		printf("%f\t",c[i][j]);
	// 	}
	// 	 pritnf("\n",);
	// }
	return 0;
}