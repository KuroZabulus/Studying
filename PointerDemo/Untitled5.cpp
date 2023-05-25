#include<stdio.h>
#include<stdlib.h>

int receiveSize();
int allocArr(int size);
int main()
{
	int size=0;
	int *arr;
	size=receiveSize();
	printf("\nYou have chosen an array size of %d",size);
	printf("\nCreating an array size of %d...\n",size);
	arr=allocArr(size);
	if(*arr==NULL) printf("\nArray creation fail, please terminate with CTRL+C");
	else{
		for(int i=0;i<size;i++) printf("arr[%d]=%d",i,arr[i]);}
	getchar();
	free(arr);
	return 0;
}

int receiveSize()
{
	int n;
	char check;
	do{
	printf("Input array size: ");
	scanf("%d",&n);
	//printf("Addr - Value of n: %u - %d",&n,n);
	printf("\nIs %d your desired size? ",n);
	printf("\nY for yes, N for no: ");
	getchar();
	scanf("%c",&check);} //%s can ignore whitespace and enter but will overflow to other variable
	//printf("Addr - Value of check: %u - %c",&check,check);}
	while(check!='y');
	//printf("\nAddr - Value of n: %u - %d",&n,n);
	return n;
}

int allocArr(int size)
{
	int *ret;
	ret=(int*)calloc(size,sizeof(int));
	if(!ret) return NULL;
	for(int i=0;i<size;i++){
		printf("arr[%d]=",i);
		scanf("%d",&ret[i]);}
	return ret;
	free(ret);
}
