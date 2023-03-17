#include<stdio.h>
#include<stdlib.h>

void Search2Max(int arr[]);
void InArr(int arr[]);
int n;
int main()
{
	//declare array after array size input
	printf("Number of integers in array: ");
	do
	{
		scanf("%d",&n); 
		if(n<10) printf("There must be 10 or more elements, retry: ");
	}
	while (n<10);
	int arr[n]; //avoid segmentation fault
	printf("Input %d integers in array: ",n);
	InArr(arr);
	Search2Max(arr);
	getchar(); 
	getchar();
	return 0;
}

void InArr(int arr[])
{
	for (int i=0;i<n;++i)
		{
		scanf("%d",&arr[i]); //take number
		}
}

void Search2Max(int arr[])
{
	int Max1=1;
	int Max2=0;
	for (int i=0;i<n;++i)
	{
		if (arr[i]>Max1) Max1=arr[i]; //printf("\nMax1=%d",Max1);
	}
	for (int i=0;i<n;++i)
	{
		if (arr[i]>Max2&&arr[i]<Max1) 
		{
			if (arr[i]!=Max1) Max2=arr[i]; //printf("\nMax2=%d",Max2);
		}
	}
	printf("Largest number: %d",Max1);
	printf("\nSecond largest number: %d",Max2);
}
