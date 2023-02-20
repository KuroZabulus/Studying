#include<stdio.h>

int main()
{
	int a,b,P;
	printf("Input length and width of rectangle: ");
	scanf("%d %d",&a,&b); //Read in order
	
	P=2*(a+b);
	printf("\nPerimeter of rectangle of length %d and width %d is: %d",a,b,P);
	getchar();
	return 0;
}
