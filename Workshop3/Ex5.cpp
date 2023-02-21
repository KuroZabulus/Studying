#include<stdio.h>
#include<math.h>

int PrimeCheck(long n) //take number n to check
{
	int flag=1,Divrs; //default flag=yesPrime
	for (Divrs=2; Divrs<=sqrt(n);Divrs++) //divisor starts at 2, less than sqrt(n)
	{
		if(n%Divrs==0) 
		{ //if number n can be divided by divisor i, set flag to notPrime and end loop
			flag=0;
			break;
		}
	}
	return flag;
}

int main()
{
	int flag,n,count=1;
	char i=2;
	printf("Input number of primes: ");
	scanf("%d",&n); //recieve number of primes needed to be print
	do
	{
		flag=PrimeCheck(i); //check current i for prime
		if(flag==1)
		{
			printf("%ld ",i); //print and increase total prime by 1
			count++;
			i++;
		}
		else
		{
			i++; //next number
		}
	}
	while (count<=n); //stop when enough
	getchar();
	return 0;
}
