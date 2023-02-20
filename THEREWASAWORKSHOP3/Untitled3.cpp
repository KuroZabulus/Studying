#include<stdio.h>

void Swap2Num(float a, float b)
{
	a=a+b;
	b=a-b; //b=a+b-b=a
	a=a-b; //a=a+b-a=b
	printf("\nAfter swap: %.2f %.2f",a,b);
}

int main()
{
	float a,b;
	printf("Input two numbers: ");
	scanf("%f %f",&a,&b);
	printf("Before: %.2f %.2f",a,b);
	Swap2Num(a,b);
	getchar();
	return 0;
}
