#include<stdio.h>

void PrintDiv(int x);
int SumDiv(int x);
int main()
{
	int n, ans;
	
	printf("Input n: ");
	scanf("%d",&n);
	
	PrintDiv(n);
	ans=SumDiv(n);
	printf("\nSum of divisors: %d",ans);
	
	getchar();
	return 0;
}

void PrintDiv(int x)
{
	printf("\nDiv List: ");
	for (int i=1;i<=x/2;i++)
	{
		if (x%i==0)
		{
			printf("%d ",i);
		}
	}
}

int SumDiv(int x)
{
	int sum=0;
	for (int i=1;i<=x/2;i++)
	{
		if (x%i==0)
		{
			sum+=i;
		}
	}
	return sum;
}


