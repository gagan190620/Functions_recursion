#include<stdio.h>
#include <stdlib.h>
int main()
{
	int i=12,j=30;
	printf("Input first number:%d\n",i);
	printf("Input second number:%d\n",j);
	printf("\n*********************************************\n");
	printf("\nLCM of %d and %d is: %d",i,j,lcm(i,j));  
}
int lcm(int a,int b)
{
	static int m=0;
	m=m+b;
	if(m%a==0&&m%b==0)
	return m;
	else
	return lcm(a,b);
}
