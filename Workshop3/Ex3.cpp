#include<stdio.h>

void Swap2Num(int a, int b)
{
	a=a+b;
	b=a-b; //b=a+b-b=a
	a=a-b; //a=a+b-a=b
	printf("\nAfter swap: %d %d",a,b);
}

int main()
{
	int a,b;
	printf("Input two numbers: ");
	scanf("%d %d",&a,&b);
	printf("Before: %d %d",a,b);
	Swap2Num(a,b);
	getchar();
	return 0;
}
