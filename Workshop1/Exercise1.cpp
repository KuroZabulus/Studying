#include<stdio.h>
#include<conio.h>

int main()
{
	char c='A';int i=1; long l=1000;
	float f=0.5f; double d=12.809;
	
	printf("Variable c: at address: %u, value: %c, size %d\n", &c,c,sizeof(c));
	printf("Variable i: at address: %u, value: %d, size %d\n", &i,i,sizeof(i));
	printf("Variable l: at address: %u, value: %ld, size %d\n", &l,l,sizeof(l));
	printf("Variable f: at address: %u, value: %f, size %d\n", &f,f,sizeof(f));
	printf("Variable d: at address: %u, value: %lf, size %d\n", &d,d,sizeof(d));
	getch;
	return 0;
}
