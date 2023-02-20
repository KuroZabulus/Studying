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

void PrintPrime(long LoLim,long HiLim) //print accepted primes within limit
{
	long n;
	int flag;
	for (n=LoLim;n<=HiLim;n++) //set current number to start at lolim, end at hilim
	{
		flag=PrimeCheck(n); //pass current number to check for prime
		if(flag==1) //if number is prime, print number
		{
			printf("%ld ",n);
		}
	} //else, nothing happens, and number increase to the next
}

int main()
{
	long LoLim, HiLim;
  	printf("Input lower limit: ");
		scanf("%ld",&LoLim);
		printf("Input high limit: ");
		scanf("%ld",&HiLim);
		if (LoLim>HiLim) //swap two limits if HiLim is less than LoLim
		{
			LoLim=LoLim+HiLim;
			HiLim=LoLim-HiLim; 
			LoLim=LoLim-HiLim;
		}
		printf("Primes between %ld and %ld are: ",LoLim,HiLim);
		PrintPrime(LoLim,HiLim); //pass in lo/hi limit for PrintPrime
		getchar();
		return 0;
}
