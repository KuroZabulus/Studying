#include<stdio.h>
#include<stdlib.h> //call for header file in the system directory
#include"function.cpp" //call for file in the same directory of this program

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
