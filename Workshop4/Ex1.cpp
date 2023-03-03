#include<stdio.h>

void Swap2Num(int *a, int *b); 
//declare function, is needed if main() function is first function to be called
int main()
{
	int a,b;
	printf("Input two numbers: ");
	scanf("%d %d",&a,&b);
	printf("\nBefore: %d %d",a,b);
	Swap2Num(&a,&b); //pass address and value in addr into function
	printf("\nAfter : %d %d",a,b);
	getchar();
	return 0;
}

void Swap2Num(int *a, int *b) //initialize function, pass in address/value of variable
{
	int temp=0;
	//a=a+b;
	//b=a-b; 
	//a=a-b; 
	temp=*a; //temp value is now the value in addr of a
	*a=*b; //swap two value of 2 addr a b
	*b=temp; //value in addr b is now the value of temp
} //using pointers allow for value manipulation of variable outside of function

