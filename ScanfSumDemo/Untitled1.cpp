// Library declaring functions for standard I/O commands
#include <stdio.h>
int main()
{	
	float S,a,b;
	int c;
	printf("Input one integer, then two floats, separated by a whitespace or new line: ");
	scanf("%*d %f %f",&a,&b);
	//%*d = ignore user input
	/*
	printf("Input first number: ");
	scanf("%d", &a);
	printf("\nInput second number: ");
	scanf("%d", &b);
	*/
	S=a+b;
	printf("\nThe sum of float %.2f and %.1f is: %.1f, the integer is ignored",a,b,S);
	getchar();
	return 0;
}
