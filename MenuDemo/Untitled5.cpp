#include<stdio.h>

int main()
{
	int a[]={2,4,6,-2};
	int i;
	for(i=0;i<4;i++)
		printf("a[%d], value:%d, %d\n",i,*(a+i),a[i]);
	for(i=0;i<4;i++)
		printf("a[%d], addr: %u, %u\n",i,a+i,&a[i]);
		
	int b[]={2,4};
	for(i=0;i<4;i++)
		printf("b[%d], value:%d, %d\n",i,*(b+i),b[i]);
	for(i=0;i<4;i++)
		printf("b[%d], addr: %u, %u\n",i,b+i,&b[i]);
	getchar();
	return 0;
}
