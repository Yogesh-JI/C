#include <stdio.h>
int main()

{
	int marks,attendence;
	printf("enter the marks: ");
	scanf("%d",&marks);
	printf("enter the attendence: ");
	scanf("%d",&attendence);
	if(marks>60 && attendence>=75)
	{
		printf("good");
	}
	
	else
	{
		printf("sorry,try next time");
	}
}
