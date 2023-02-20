#include<stdio.h>

int main()
{
	int i,n,S=0;
	printf("Upper Limit: ");
	scanf("%d",&n);
	printf("Sum of all natural number from 1 to %d: ",n);
	for(i=1; i<=n; i++)
	{
		S+=i;
	}
	printf("%d",S);
	getchar();
	return 0;
}
