#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,num;
	printf("Input number:\t");
	scanf("%d",&i);
	num=prime(i,i/2);
	printf("\n*********************************************\n");
	if(num==1)
	printf("\n %d is prime",i);  
	else
	printf("\n%d is not prime",i);
	return 0;
}
int prime(int a,int j)
{
	if(j==1)
	{
		return 1;
	}
	else if(a%j==0)
	return 0;
	else
	return prime(a,j-1);		
	
}
	
