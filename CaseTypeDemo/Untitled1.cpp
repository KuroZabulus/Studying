#include<stdio.h>

int main()
{
	int a=20,b=3,d=500;
	char s=65;
	float c=(float)a/b;
	
	printf("Result: %.2f",c);
	
	getchar();
	
	printf("s=%c,%d",s,s);
	printf("\n-----------------------------------\n");
	printf("d=%d",d);
	
	s=d;
	printf("\n---------After---------\n");
	printf("s=%d",s);//Garbage data
	
	getchar();
	
	d=s;
	printf("\n---------After---------\n");
	printf("s=%d",s);//Garbage data
	
	getchar();
	return 0;
}
