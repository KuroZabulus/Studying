#include<stdio.h>
#include<math.h> //C math functions
#define _USE_MATH_DEFINES // for math.h's math constants
//can use #define for constant number i.e #define PI 3.14
int main()
{
	long r,d,A;
	float C,pi=3.14;//if defined, use M_PI instead
	//can also declare pi like this: const float/long pi=3.1415
	printf("Input radius of circle: ");
	scanf("%d",&r);
	
	d=2*r;
	C=d*pi;
	A=pow(r,2)*pi; //if no math.h, use r*r*pi instead
	printf("\nDiameter of circle radius %d is: %d",r,d);
	printf("\nCircumference of circle radius %d is: %.2f",r,C);
	printf("\nArea of circle radius %d is: %d",r,A);
	getchar();
	return 0;
}
