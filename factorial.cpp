#include<stdio.h>
long factorial(int);
int main()
{
	long result;
	int num;
	printf("/n enter a number");
	scanf("%d",&num);
	result=factorial (num);
	printf("/n the factorial number of %d is %ld",num,result);
	return 0;
	
}
long factorial(int num)
{
	if(num==1)
	return 1;
	else
	return num * factorial(num-1);
}
