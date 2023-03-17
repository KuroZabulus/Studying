#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXN 50

int menu(){
	printf("\nEnter a value");
	printf("\n1 - Add a new employee");
	printf("\n2 - Find an employee based on that employee's name");
	printf("\n3 - Remove an employee");
	printf("\n4 - print out employee list according to descending of salaries and allowances");
	printf("\nother - Quit");
	printf("\nSelect:");
	
	int choice;
	scanf("%d%*c",&choice);
	
	return choice;
	
}

void add (char codes[][9],char names[][21], double salaries[], double allowances[], int *pn){
	
		printf("Enter a code :");
		scanf("%8s",codes[*pn]);
		
		fflush(stdin);
		
		printf("Enter a Name :");
		scanf("%20[^\n]",names[*pn]);
		
		fflush(stdin);
		
		printf("Enter a salaries :");
		scanf("%lf",&salaries[*pn]);
		
		fflush(stdin);
		printf("Enter a allowances :");
		scanf("%lf",&allowances[*pn]);
		
		(*pn)++;
	
}


int search(char key[], char names[][21], int n){
	int i;
	for(i=0; i<n;i++)
		if(strcmp(names[i],key)==0) return i;
		
	return -1;
	
}

int removepos(char key[],char code[][9],char names[][21],double salaries[], double allowances[],int *pn){
	int i,index=-1;
	
	for(i=0; i<*pn;i++)
		if(strcmp(code[i],key)==0){
			index= i;
			break;
		} 
	
	// Don cac phan tu trong mang tu vi tri index
	if(index>=0){
		
		for(i=index; i<*pn-1;i++){
	
			strcpy(code[i],code[i+1]);
			strcpy(names[i],names[i+1]);
			salaries[i]=salaries[i+1];
			allowances[i]=allowances[i+1];
		
		}
		
		(*pn)--;
	}	

	return index;
}

void swap_string(char a[],char b[]){
	char t[100];
		strcpy(t,a);
		strcpy(a,b);
		strcpy(b,t);
}

void swap(double &a,double &b){
	double t=a;
		   a=b;
		   b=t;
}

void sort(char codes[][9], char names[][21], double salaries[], double allowances[], int n){   
	int i,j;
	for (i=0; i<n-1; i++)
      for (j=n-1; j>i; j-- )
         if ( (salaries[j] + allowances[j]) >  (salaries[j-1] + allowances[j-1])  )
              {    	swap_string(codes[j], codes[j-1]);
                	swap_string(names[j], names[j-1]);
                    swap (salaries[j], salaries[j-1]);
                    swap (allowances[j], allowances[j-1]);
               } 
       
}  



void print (char codes[][9],char names[][21], double salaries[], double allowances[], int n){
	int i;
	sort(codes,names,salaries,allowances,n);
	for(i=0;i<n;i++){
		printf("\n%s - ",codes[i]);
		printf("%s - ",names[i]);
		printf("%f - ",salaries[i]);
		printf("%f",allowances[i]);
		printf("\n--------------------------\n");
	}
		
		
}



int main(){
	char code[MAXN][9],names[MAXN][21];
	double salaries[MAXN], allowances[MAXN];
	
	
	int value;
	int userChoice;
	int result_search=-1;
	int result_delete=-1;
	char code_delete[9];
	char name_search[21];
	int n=0;// so nhan vien thuc su co trong danh sach
	
	do{
		userChoice=menu();
		switch(userChoice){
			case 1: 
				add(code,names,salaries,allowances,&n);
				break;
			case 2: 
				printf("\nEnter the name want to search:");
				scanf("%20[^\n]",name_search);
				result_search=search(name_search,names,n);
				if(result_search>=0)
					printf("\n %s in position :%d",name_search,result_search);
				else
					printf("\Not found");
				break;
			
			case 3: 
				printf("\nEnter the code want to remove:");
				scanf("%8s",&code_delete);
				result_delete=removepos(code_delete,code,names,salaries,allowances,&n);
				if(result_delete>=0)
					printf("\n Removed");
				else
					printf("\ncoundn't remove");
				
				break;
			case 4: 
				print(code,names,salaries,allowances,n);
				break;
				
			default: printf("\nGoodbye\n");
		}
		
		
	}while(userChoice>0 && userChoice>5);
	
	
	
	getchar();
	return 0;
}
