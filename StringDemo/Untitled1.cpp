#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* replaceAll(char* source, char* subStr, char* repStr);
int main()
{
	char S[80]="con coc trong hang, con coc nhay ra, con coc chet";
	char subStr[21]="coc";
	char repStr[21]="bo";
	puts(S);
	replaceAll(S,subStr,repStr);
	puts(S);
	getchar();
	getchar();
	return 0;
}

char* replaceAll(char* source, char* subStr, char* repStr)
{
	int subL=strlen(subStr);
	int repL=strlen(repStr);
	char temp[100];
	char* ptr = strstr(source,subStr);
	int i;
	while (ptr!=NULL)
	{
		strcpy(ptr, ptr+subL);
		if (repL>0)
		{
			strcpy(temp,ptr);
			strcpy(ptr+repL, temp);
			for (i=0;i<repL;i++) *(ptr+i)=repStr[i];
		}
		ptr=strstr(source, subStr);
	}
	return source;
}
