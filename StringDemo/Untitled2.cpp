#include<stdio.h>
#include<string.h>
#include<conio.h>
/*int main()
{
	int n=10;
	char S[11]="Hello";
	int m=9;
	printf("Var n: addr: %u, value: %d\n",&n, n);
	printf("Var S: addr: %u, value: %s\n",S, S);
	printf("Var m: addr: %u, value: %d\n",&m, m);
	printf("Length of S: %d\n", strlen(S));
	getch();
	return 0;
}*/

int main()
{
	char S[11]="Hello";
	char C[31];//="Limbus Company";
	printf(S);
	getch();
	printf("\n%s",S);
	getch();
	printf("\n%s\n",S);
	getch();
	puts(S);
	getch();
	printf("Type Limbus Company: ");
	//scanf("%s",C); //stop receiving at white space
	//scanf("%5s",C); //stop receiving at white space and char n-1
	//scanf("%[^\n]",C); //receive whole string, stop at \n newline
	//scanf("%11[^\n]",C); //receive 11 char of strings, including white space, stop at \n
	printf("%s\n",C);
	return 0;
}
