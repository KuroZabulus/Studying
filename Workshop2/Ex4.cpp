#include<stdio.h>

int main()
{
	int m;
	char trhop; 
	printf("Input month number: ");
	scanf("%d",&m);
	//printf("Month: %d\n",m); //debug
	if (m<=7){
		trhop= m%2==0? 'b':'a';} //odd even months below 7
	else{
		trhop= m%2==0? 'a':'b';} //inverted for months above 7
	trhop= m>12? 'n':trhop; //disallow case over 12
	//printf("Case: %c\n",trhop); //debug
	switch (trhop){
		case 'a': //1 3 5 7 8 10 12
			printf("Total days = 31");
			break;
		case 'b': //2 4 6 9 11
			if (m==2){
				printf("Total days = 28 (29 on a leap year)");}
			else{
				printf("Total days = 30");}
			break;
		default: printf("Invalid month?");}
	getchar();
	return 0;
}
