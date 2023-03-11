#include<stdio.h>

int getUserChoice();
void printSumEven();
void printInputSumTilInter();
void checkLeapYear();
int main()
{
	int userChoice;
	do
	{
		userChoice=getUserChoice();
		switch(userChoice)
		{
			case 1: printSumEven(); break;
			case 2: printInputSumTilInter(); break;
			case 3: checkLeapYear(); break;
			default: printf("Goodbye!\n");
		}
	}
	while (userChoice>0&&userChoice<4);
	fflush(stdin);
	getchar();
	return 0;
}

int getUserChoice()
{
	int choice;
	printf("----------Exercise 2----------");
	printf("\n\"Choice number - Choice functions\"\n");
	printf("1 - Print sum of even numbers less than n\n");
	printf("2 - Print sum of integers inputted from keyboard\n");
	printf("3 - Check inputted year for leap year\n");
	printf("Other - Terminate this program\n");
	printf("------------------------------\n");
	printf("Please choose a function to execute: ");
	scanf("%d%*c",&choice);
	return choice;
}

void printSumEven()
{
	long n,Sum=0;
	printf("Input a number: ");
	scanf("%ld",&n);
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			Sum+=i;
		}
	}
	printf("Sum of all even number less than %d is: %d\n\n",n,Sum);
}

void printInputSumTilInter()
{
	int n,Sum=0;
	printf("Input integers, input 0 to end: ");
	do
	{
		scanf("%d",&n);
		Sum+=n;
	}
	while(n!=0);
	printf("Sum of all inputted number is: %d\n\n",Sum);
}

void checkLeapYear()
{
	int year;
	printf("Input a year number: ");
	scanf("%d",&year);
	if(year%4==0&&year%100!=0||year%400==0)
	{
		printf("Year %d is a leap year!\n\n",year);
	}
	else
	{
		printf("Year %d is NOT a leap year!\n\n",year);
	}
}
