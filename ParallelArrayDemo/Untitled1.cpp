#include<stdio.h>
#include<string.h>

int main()
{
char name [10][21];
int minwidth = strlen(name[0]);
 for(int i=1;i<10;i++)
 	{
 		if (strlen(name[i])<minwidth)
 		minwidth = strlen(name[i]);
	}
int j;
for(j=0;j<10;j++)
	{
		if (strlen(name[j])==minwidth)
		puts(name[j]);
	}
}
