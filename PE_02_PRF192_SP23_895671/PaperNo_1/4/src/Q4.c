#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
//--------------------------------------
char* capitalize(char* str){
  //Write your statements here 
  int i;
  str[0]-=32;
	  for(i=0;i<MAX_SIZE;i++)
	  {
	  	if(str[i]==' ')
			{
				i++;										                     
	  		if(str[i]>='a'&&str[i]<='z')
	  		{
	  			str[i]-=32;
				}
			}
		}
  //End your statements  
  return str; //take addr of this
}
//--------------------------------------
int main()
{
  //====DO NOT ADD NEW OR CHANGE THIS STATEMENTS   
  system("cls");
  printf("\nTEST Q4 (3 marks):\n");
  char str[MAX_SIZE];
  char *strCapitalize;
  /* Input string from user */
  printf("Enter any string: ");
  gets(str);
  //convert to capitalize string
  strCapitalize=capitalize(str);
   //====DO NOT ADD NEW OR CHANGE STATEMENTS AFTER THIS LINE====
  //==THE OUTPUT AFTER THIS LINE WILL BE USED TO MARK YOUR PROGRAM==	  
  printf("\nOUTPUT:\n"); 
  printf("%s", strCapitalize); 
  printf("\n"); 
  system ("pause");
  return(0); 
  //==========================================
}

 
