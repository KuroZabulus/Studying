#include<stdio.h>
#include<stdlib.h>
//variable length array program
void InArr(int arr[]);
void OutArr(int arr[]);
int n;
int main()
{
	 //declare array after array size input
	printf("Number of integers in array: ");
	scanf("%d",&n); 
	int arr[n]; //avoid segmentation fault
	printf("Input %d integers in array: ",n);
	InArr(arr);
	OutArr(arr);
	getchar(); 
	getchar();
	return 0;
}
//original code InOutArr as one function
//int n is local main variable, is passed into In and Outarr(n,arr)
void InArr(int arr[])
{
	for (int i=0;i<n;++i)
		{
		scanf("%d",&arr[i]); //take number
		printf("arr[%d] : %u - %p\n",i,&arr[i],&arr[i]); //address of each elements
		}
}

void OutArr(int arr[])
{
	printf("Integers in array:\n");
	for (int i=0;i<n;++i)
		{										
		printf("arr[%d] : %d\n",i,arr[i]); //print number and their pos.
		//printf("arr[%d] : %u\n",i,&arr[i]); //address of each elements
		}
}

//implement a function to change value of an array entry

