#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100
void inputArray(int a[], int n);
void printArray(int a[], int n);
int sumPrimeArray(int a[], int n);


//=== Do not add new or change statements in the main function.===
int main() {

	system("cls");
  	printf("\nTEST Q3 (3 marks):\n");
	int n, a[MAX],sum=0;	
	char c;
	do {
		printf("How many elements do you want to enter into the integer array? [1..100] ");
		fflush(stdin);
		scanf("%d%c", &n, &c);
	} while(n<1 || n>MAX || c != '\n');	
	inputArray(a,n);
			
	//=== The output will be used to mark your program.===============
	printf("\nOUTPUT:\n");
  	sum=sumPrimeArray(a,n); 
  	printf("%d",sum);
  	printf("\n");
  	system ("pause");	
	return 0;
}
//=== Do not add new or change statements in this function.===
void inputArray(int a[], int n) {	
    int i;
	for(i=0; i<n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
//This function checks n whether is prime or not
//if true then return 1, otherwise return 0
int isPrimeNumber(int num){
	int result = 1;
	// Write your statements here
	int Divrs; 
		for (Divrs=2; Divrs<=sqrt(num);Divrs++) 
		{
			if(num%Divrs==0) 
			{
				result=0;
				break;
			}
		}
	// End your statements 
	return result;
}
//----------------------------------------------
int sumPrimeArray(int a[], int n) {
	int sum = 0;
	//Begin your statements here=====================
	int result,i, num=0;
	for (i=0;i<n;i++)
	{	//Invoke isPrimeNumber function to get the result
		if(a[i]>=2)
		{
			num=a[i];
			result=isPrimeNumber(num);
			if(result==1) 
			{
				sum+=num;
			}
		}
	}	
	//End your statements============================
	return sum;
}

