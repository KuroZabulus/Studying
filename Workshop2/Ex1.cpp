#include<stdio.h>

int main()
{
	float a,b,c,ans=0.0; 
	//only use double when precision is needed e.g math
	
	printf("Input num1,2,3: ");
	scanf("%f%f%f",&a,&b,&c);
	
	ans= a>=ans? a:ans;
	ans= b>=ans? b:ans;
	ans= c>=ans? c:ans;
	
	printf("Max is: %.2f",ans);
	getchar();
	return 0;
}
