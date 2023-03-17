#include<stdio.h>
#include<stdlib.h>

void InArr(int arr[]);
void OutNegArr(int arr[]);
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
	OutNegArr(arr);
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

void OutNegArr(int arr[])
{
	printf("Negative integers in array:\n");
	for (int i=0;i<n;++i)
		{	
			if(arr[i]<0)									
			{
				printf("arr[%d] : %d\n",i,arr[i]);
			}
		}
}
