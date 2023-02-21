#include<stdio.h>
#include<stdlib.h>
#include"function.cpp"

int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	if(PrimeCheck(n)==1)
	{
		printf("\n%d is prime",n);
	}
	else
	{
		printf("\n%d is not prime",n);
	}
	getchar();
	return 0;
}
