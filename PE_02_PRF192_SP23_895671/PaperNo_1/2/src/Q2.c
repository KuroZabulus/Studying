#include <stdio.h>
#include <stdlib.h>
//------------------------------------
void sum(int n){
   // Write your statements here 
 float S=0;
 float i;
 for(i=1;i<=n;i++)
 {
 	S+=1/(2*i); //S=0+1/(2*1)
 }
 printf("%.2f",S);
   //The output value is formatted in two decimal places
   //End your statements
}

//=============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION========
int main()
{  
  system("cls");
  printf("\nTEST Q2 (3 marks):\n");
  int n;
  printf("\nEnter n: ");
  scanf("%d", &n);  
  //============================================================  
  //=====DO NOT ADD NEW OR CHANGE STATEMENTS AFTER THIS LINE=====
  //==THE OUTPUT AFTER THIS LINE WILL BE USED TO MARK YOUR PROGRAM==
  printf("\nOUTPUT:\n");
  sum(n);
  printf("\n");
  system ("pause");
  return(0);
}
