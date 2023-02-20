#include<stdio.h>

int main()
{
	int n;
	char c;
	printf("Int in: ");
	scanf("%d",&n);
	getchar();
	//without this get char, the scanf for character will take the character Enter=10 
	//into the address of c without allowing user to manually input to c
	//place a getchar before any scanf that takes charaacter to avoid this
	printf("\nChar in: ");
	scanf("%c",&c);
	//try deleting the getchar before print Char in 
	//and change the line below to printf("\nn=%d, c=%d",n,c); and run
	//the result should be "n=your number, c=10"
	printf("\nn=%d, c=%c",n,c);
	getchar();
}

/*int main()
{
	int n,m;
	float a,b;
	double x,y;
	printf("2 Int in:" );
	scanf("%d%d",&n,&m);
	printf("\n2 Float in" );
	scanf("%f%f",&a,&b
}
*/
