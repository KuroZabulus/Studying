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

/* Sort the list based on salary + allowance*/
void sort(char codes[][9], char names[][21], double salaries[], 
                 double allowances[], int n)
{   for (i=0; i<n-1; i++)
      for (j=n-1; j>i; j-- )
         if ( salaries[j] + allowances[j] <   salaries[j-1] + allowances[j-1] )
              {    swap codes[j], codes[j-1];
                    swap names[j], names[j-1];
                    swap salaries[j], salaries[j-1];
                    swap allowances[j], allowances[j-1];
               } 
       }
}  

/* Sort the list based on categories then names*/
void sort(char codes[][9], char names[][21], int prices[], 
                 char categories[][13], int n)
{   for (i=0; i<n-1; i++)
      for (j=n-1; j>i; j-- )
       {   int dCat = strcmp( categories[j], categories[j-1]);  /* Category difference */
        int dName = strcmp( names[j], names[j-1]); /* name difference */
        if ( dCat<0 || (dCat==0 && dName <0))
              {    swap codes[j], codes[j-1];
                    swap names[j], names[j-1];
                    swap prices[j], prices[j-1];
                    swap categories[j], categories[j-1];
               } 
       }
}  
