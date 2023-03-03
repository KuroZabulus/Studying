#include<stdio.h>
#include<stdlib.h>

int sumBetw(int a, int b);
void funct1();
void printASCII(char c1, char c2);
void funct2();
int getUserChoice();
int main()
{
	int userChoice;
	do
	{
		userChoice=getUserChoice();
		switch(userChoice)
		{
			case 1: funct1(); break;
			case 2: funct2(); break;
			default: printf("Bye!\n");
		}
	}
	while (userChoice>0&&userChoice<3);
	fflush(stdin);
	getchar();
	return 0;
}

int getUserChoice()
{
	int choice; //user choice
	//Present the menu
	printf("\n1 - Operation 1");
	printf("\n2 - Operation 2");
	printf("\nOthers - Quit");
	//Take user choice
	printf("\nChoose:");
	//&*c: Remove ENTER key but no char var is needed
	scanf("%d%*c",&choice);
	return choice;
}

//1: Input 2, print sum in between including them
int sumBetw(int a, int b)
{
	int t;
	if (a>b) //swap if a more than b
	{
		t=a;
		a=b;
		b=t;
	}
	int S=0;
	for (t=a;t<=b;t++);
	{
		S+=t;
	}
	return S;
}

void funct1()
{
	int n1,n2; //2 ints
	printf("Enter 2 ints: ");
	scanf("%d%d*c",&n1,&n2);
	printf("Sum=%d\n",sumBetw(n1,n2));
}

//2: Input 2 chars, print out the ASCII between 2 in ascending ord
void printASCII(char c1, char c2)
{
	char c;
	if (c1>c2) //swap if c1 more than c2
	{
		c=c1;
		c1=c2;
		c2=c;
	}
	for (c=c1;c<=c2;c++)
	{
		printf("%c,%3d,%3oq,%3Xh\n",c,c,c,c);
	}
}

void funct2()
{
	char c1,c2; //inputted char
	printf("Enter 2 char contiguously: ");
	scanf("%c%c",&c1,&c2);
	printASCII(c1,c2);
}
