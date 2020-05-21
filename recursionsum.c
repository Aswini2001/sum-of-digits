#include<stdio.h>
int sumdigits(int);
int main()
{
	int n,answer;
	printf("input number: ");
	scanf("%d",&n);
	answer=sumdigits(n);
	printf("sum of digits:%d",answer);
	return 0;
}
int sumdigits(int a)
{
	if (a==0)
	return 0;
	else if(a==1)
	return 1;
	else
	return(a%10 + sumdigits(a/10));
}
