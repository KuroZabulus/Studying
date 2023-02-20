#include<stdio.h>

int main()
{
	float n;
	
	printf("Input a number: ");
	scanf("%f",&n);
	
	if (n>=0){
		if(n==0){
			printf("%.1f is a 0",n);}
		else{
			printf("%.1f is positive",n);}}
	else{
		printf("%.1f is a negative",n);}
	
	getchar();
	return 0;
}
