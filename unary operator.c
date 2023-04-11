#include <stdio.h>
#include <conio.h>

int main()
{

int x= 3,y,z;
y=x++;
z=++x;
printf("\n%d,%d,%d",x,y,z);

}


{
	int x,y,z;
	printf("enter x= ");
	scanf("%d",&x);
	y=x++;
   z=++x;
   printf("\n%d,%d,%d",x,y,z);
}

{
	int a=1,b=1,c;
	c=a++ +b;
	printf("\n%d,%d,%d",a,b,c);
	
}

{
	int x,y,z;
	
	printf("enter x= ");
	scanf("%d",&x);
	y=--x;
	z=x--;
	printf("\n%d,%d,%d",x,y,z);
}
