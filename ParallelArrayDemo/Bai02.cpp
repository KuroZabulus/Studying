#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXN 50

int menu(){
	printf("\nEnter a value");
	printf("\n1 - Add a new Item");
	printf("\n2 - print out an item list based on categories");
	printf("\n3 - Remove an Item");
	printf("\n4 - print out employee list according to descending of categories and name");
	printf("\nother - Quit");
	printf("\nSelect:");
	int choice;
	scanf("%d%*c",&choice);
	
	return choice;
	
}


void add (char codes[][9],char names[][21], int prices[], char categories[][13], int *pn){
	
	printf("Enter a code :");
	scanf("%8s",codes[*pn]);
	
	fflush(stdin);
	
	printf("Enter a Name :");
	scanf("%20[^\n]",names[*pn]);
	
	fflush(stdin);
	
	printf("Enter a price :");
	scanf("%lf",&prices[*pn]);
	
	fflush(stdin);
	printf("Enter a categories :");
	scanf("%12[^\n]",&categories[*pn]);
	
	(*pn)++;
	
	fflush(stdin);
}


void PrintCategories(char key[],char codes[][9],char names[][21], int prices[],char categories[][13], int n){
	int i,find=0;
	for(i=0; i<n;i++)
		if(strcmp(categories[i],key)==0){
			printf("\n%s - ",codes[i]);
			printf("%s - ",names[i]);
			printf("%d - ",prices[i]);
			printf("%s",categories[i]);
			find=1;
		}
		
		if(find==0)
			printf("\nNot Found");
	printf("\n");
	printf("\n");
}

int removepos(char key[],char code[][9],char names[][21],int prices[], char categories[][13],int *pn){
	int i,index=-1;
	
	for(i=0; i<*pn;i++)
		if(strcmp(code[i],key)==0){
			index= i;
			break;
		} 
	
	// Don cac phan tu trong mang tu vi tri index
	if(index>=0){
		for(i=index; i<(*pn)-1;i++){
	
			strcpy(code[i],code[i+1]);
			strcpy(names[i],names[i+1]);
			prices[i]=prices[i+1];
			strcpy(categories[i],categories[i+1]);
	
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

void swap(int *a,int *b){
	int 	t=*a;
		   *a=*b;
		   *b=t;
}

void sort(char codes[][9], char names[][21],int prices[], char categories[][13], int n){   
	int i,j;
	for (i=0; i<n-1; i++)
      for (j=n-1; j>i; j-- )
      	{
      		int dCat = strcmp( categories[j], categories[j-1]);  /* Category difference */
        	int dName = strcmp( names[j], names[j-1]); /* name difference */
        	if ( dCat<0 || (dCat==0 && dName <0)){
        		swap_string(codes[j], codes[j-1]);
                swap_string(names[j], names[j-1]);
                swap (&prices[j], &prices[j-1]);
                swap_string (categories[j], categories[j-1]);
			}

		  }
         
}  



void print (char codes[][9],char names[][21], int prices[], char categories[][13], int n){
	int i;
	sort(codes,names,prices,categories,n);
	for(i=0;i<n;i++){
		printf("\n%s - ",codes[i]);
		printf("%s - ",names[i]);
		printf("%d - ",prices[i]);
		printf("%s",categories[i]);
	}
		
	printf("\n");
	printf("\n");	
}



int main(){
	char codes[MAXN][9],names[MAXN][21],categories[MAXN][13];
	int prices[MAXN]; 
	categories[MAXN][13];
	
	
	int value;
	int userChoice;
	int result_search=-1;
	int result_delete=-1;
	char code_delete[9];
	char categories_search[13];
	int n=0;

	do{
		userChoice=menu();
		switch(userChoice){
			case 1: 
				add(codes,names,prices,categories,&n);
				break;
			case 2: 
				printf("\nEnter the category want to search:");
				scanf("%12[^\n]",&categories_search);
				PrintCategories(categories_search,codes,names,prices,categories,n);
				break;
			
			case 3: 
				printf("\nEnter the code want to remove:");
				scanf("%8s",&code_delete);
				result_delete=removepos(code_delete,codes,names,prices,categories,&n);
				if(result_delete>=0)
					printf("\n Removed");
				else
					printf("\ncoundn't removed");
				break;
				
			case 4: 
				print(codes,names,prices,categories,n);
				break;
				
			default: printf("\nGoodbye\n");
		}
		
		
	}while(userChoice>0 && userChoice>5);
	
	
	
	getchar();
	return 0;
}
