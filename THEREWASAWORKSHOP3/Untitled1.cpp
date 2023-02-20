#include<stdio.h>
#include<math.h> 
#define _USE_MATH_DEFINES

void CalcDia(long r)
{
	long d;
	d=r*2;
	printf("\nDiameter: %ld",d);
}

void CalcCir(long r)
{
	float C;
	C=r*2*M_PI;
	printf("\nCircumference: %.2f",C);
}

void CalcArea(long r)
{
	float A;
	A=pow(r,2)*M_PI;
	printf("\nArea: %.2f",A);
}

int main()
{
	long r;
	printf("Input radius: ");
	scanf("%ld",&r);
	CalcDia(r);
	CalcCir(r);
	CalcArea(r);
	getchar();
	return 0;
}
