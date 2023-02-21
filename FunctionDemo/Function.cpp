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

