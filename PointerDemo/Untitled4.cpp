#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *a;
	int n;
	printf("Type size: ");
	scanf("%d",&n);
	a=(int*)calloc(n,sizeof(int));
	printf("Input value in elements: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("\na[%d]=%d",i,a[i]);
	}
}
