#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//-----------------------------------
//This function is used to check n whether is prime or not
//if true then return 1, otherwise return 0
int isPrimeNumber(int n){
	// Write your statements here
	int flag=1,Divrs; 
	for (Divrs=2; Divrs<=sqrt(n);Divrs++) 
	{
		if(n%Divrs==0) 
		{
			flag=0;
			break;
		}
	}
	return flag;
	// End your statements 
}
//-----------------------------------
void printAverageOfPrimes(int n){
	// Write your statements here
	int flag,count,i;
	float Sum=0,avg=0;
	for (i=2;i<n;i++) 
	{	//Invoke isPrimeNumber function to get the result
		flag=isPrimeNumber(i); 
		if(flag==1) 
		{
			Sum+=i;
			count++;
		}
	}
	avg=Sum/count;
	printf("%.2f",avg); 
}	
	//The output value is formatted in two decimal places
	// End your statements 
//======DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION========
int main()
{
  system("cls");
  printf("\nTEST Q1 (2 marks):\n");
  int n, i;
  double avg;
  printf("Enter n = "); scanf("%d",&n);    
  printf("\nOUTPUT:\n");
  printAverageOfPrimes(n);
  //====DO NOT ADD NEW OR CHANGE STATEMENTS AFTER THIS LINE====
  //==THE OUTPUT AFTER THIS LINE WILL BE USED TO MARK YOUR PROGRAM==
  printf("\n");
  system ("pause");
  return(0);
}
