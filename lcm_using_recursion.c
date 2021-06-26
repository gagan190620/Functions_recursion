#include<stdio.h>
#include <stdlib.h>
int main()
{
	int i,j;
	printf("Enter first number:\t");
	scanf("%d",&i);
	printf("Enter second number:\t");
	scanf("%d",&j);
	printf("LCM of two numbers is: %d",lcm(i,j));  
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
