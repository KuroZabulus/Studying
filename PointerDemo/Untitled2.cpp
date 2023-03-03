#include<stdio.h>

void swap(int* px, int* py);
int main()
{
	int n=300,a,b;
	int *pn=&n;
	
	printf("Addr of n: %u - %p\n",&n,pn); //pn = &n
	printf("Value of n: %d\n",n);
	printf("Value of pn: %u\n",pn); 	
	
	*pn=100;
	printf("Value of n: %d\n",*pn); //*pn = n
	printf("Value of n: %d\n",n);
	
	printf("type ab: ");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("After ba: %d %d",a,b);
	
	getchar();
	return 0;
}

void swap(int* px, int* py)
{
	int temp=*px;
	*px=*py;
	*py=temp;
}
