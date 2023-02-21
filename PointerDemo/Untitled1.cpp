#include<stdio.h>

int main()
{
	int n,c,d;
	int* pointern, *ptr;
	//int * ptrn or int *ptrn works
/*printf("Type n: ");
	scanf("%d",&n); */
	n=5; //og value
	pointern=&n; //assign address of variable to pointer
	n=3; //changed through og variable
	*pointern=1; //changed through pointer
	printf("Value n: %d",n);
	printf("\nAddress n: %u, %p",&n,&n);
	printf("\nGet value from pointer n: %d",*pointern);
	//n's address and pc's address are the same so any change to both reflects eachothers
	
	c=5;
	d=-15;
	ptr=&c; printf("\n%d",*ptr); //ptr assigned c address so output 5
	ptr=&d; printf("\n%d",*ptr); //ptr now assigned d address so output -15
	
/*int c, *pc;
	// pc is address but c is not
	pc = c; // Error
	// &c is address but *pc is not
	*pc = &c; // Error
	// both &c and pc are addresses
	pc = &c;
	// both c and *pc values
	*pc = c;*/
	
	getchar();
	return 0;
}
