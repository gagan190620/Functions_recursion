#include<stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	printf("Input number:\t");
	scanf("%d",&i);
	printf("\n*********************************************\n");
	printf("\nSum of digits of %d is: %d",i,sum(i));  
}
int sum(int a)
{
	if(a==0)
	return 0;
	else
	{
		int m;
		m= (a%10+sum(a/10));
		return m;		
	}
	
}
