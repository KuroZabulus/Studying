#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int getUserChoice();
//int* allocArr(int *pa);
void inputArr(int *pa, int size);
void searchArray(int *pa, int size);
void printArrayDesc(int *pArrDesc, int size);
void printPrime(int *pa, int size);
int checkPrime(int n);
void sortEvenElemAsc(int *pa, int size);
void sortDescArray(int *pa, int size);
int main()
{
	int userChoice, size;
	int *pa;
	printf("Array size: ");
	scanf("%d",&size);
	printf("Please input into array (Option 1)\nbefore performing any task!\n\n");
	printf("Press ENTER to continue...\n");
	getchar(); getchar();
	pa = (int*) calloc (size,sizeof(int));
	//pa=&a;
	do
	{
		userChoice=getUserChoice();
		switch(userChoice)
		{
			case 1: /*pa=allocArr(pa);*/
							printf("-------Option 1: Input element--------\n");
							inputArr(pa,size); 
							printf("\n--------------------------------------\n");
							getchar(); getchar(); system("cls"); break;
			case 2: printf("-------Option 2: Search element--------\n");
							searchArray(pa,size); 
							printf("\n---------------------------------------\n");
							getchar(); getchar(); system("cls"); break;
			case 3: printf("-------Option 3: Print prime in array--------\n");
							printPrime(pa,size); 
							printf("\n---------------------------------------------\n");
							getchar(); system("cls"); break;
			case 4: printf("-------Option 4: Sort even element in ascending order--------\n");
							sortEvenElemAsc(pa,size); 
							printf("\n-------------------------------------------------------------\n");
							getchar(); system("cls"); break;
			case 5: printf("-------Option 5: Sort array in descending order--------\n");
							sortDescArray(pa,size); 
							printf("\n-------------------------------------------------------\n");
							getchar(); system("cls"); break;
			default: printf("Bye!\n");
		}
	}
	while (userChoice>0&&userChoice<6);
	free(pa);
	fflush(stdin);
	getchar();
	return 0;
}

/*int* allocArr(int *pa) //doesn't actually work (error: Segmentation Fault)
{
	int size;
	printf("Array size: ");										
	scanf("%d",&size);
	pa = (int*) calloc (size,sizeof(int));
	for(int i=0;i<size;i++)
	{
		scanf("%d",&pa[i]);
	}
	printf("Addr & value of a[0]: %u & %d\n",&pa[0],pa[0]);
	return pa;
}*/ 


int getUserChoice() //get user choice for menu
{
	int choice; //user choice
	//Present the menu
	printf("----------------Workshop 5------------------");
	printf("\n1 - Input array");
	printf("\n2 - Search a value in array");
	printf("\n3 - Print primes in array");
	printf("\n4 - Sort even elements in ascending order");
	printf("\n5 - Print out array in descending order");
	printf("\nOthers - Quit");
	printf("\n------------------------------------------");
	//Take user choice
	printf("\nChoose:");
	//&*c: Remove ENTER key but no char var is needed
	scanf("%d%*c",&choice);
	return choice;
}

void inputArr(int *pa, int size) //input value into array element
{
	printf("Input value for %d elements:\n",size);
	for (int i=0;i<size;i++)
	{
		printf("\na[%d]=",i);
		scanf("%d",&pa[i]);
	}
	printf("\nEnd of function...");
}

void searchArray(int *pa, int size) //search for a specified value in array
{
	int Search,Count=0;
	printf("Value to search for: ");
	scanf("%d",&Search);
	for (int i=0;i<size;i++) //run through array and print matching elem
	{
		if(pa[i]==Search)
		{
			printf("a[%d]=%d\n",i,Search);
			Count++;
		}
	}
	if (Count==0) printf("No matching element found!\n");
	printf("\nEnd of function...");
}

int checkPrime(int n) //take number n to check for prime
{
	int flag=1,Divrs; //default flag=yesPrime
	for (Divrs=2; Divrs<=sqrt(n);Divrs++) //divisor starts at 2, less than sqrt(n)
	{
		if(n%Divrs==0) 
		{ //if number n can be divided by divisor i, set flag to notPrime and end loop
			flag=0;
			break;
		}
	}
	return flag;
}

void printPrime(int *pa, int size) //print prime number (rely on funct checkPrime)
{
	int n;
	int flag, count=0;
	printf("Prime number in the array:\n");
	for (int i=0;i<size;i++) //set current number to start at lolim, end at hilim
	{
		n=pa[i];
		flag=checkPrime(n); //pass current number to check for prime
		if(flag==1) //if number is prime, print number
		{
			printf("a[%d]=%d\n",i,pa[i]);
			count++;
		}
	} //else, nothing happens, and number increase to the next
	if (count==0) printf("There is no prime number in the array!\n");
	printf("\nEnd of function...");
}

int countEven(int *pa, int size) //
{
	int Count=0;
	for(int i=0;i<size;i++)
	{
		if(pa[i]%2==0) Count++;
	}
	return Count;
}

void printArrayAsc(int *pEvArr, int i)
{
		printf("a[%d]=%d\n",i,pEvArr[i]);
}

void swapAsc (int *pEvArr, int i)
{
	int temp=0;
	//printf("\nBefore swap: %d - %d + %d",pEvArr[i],pEvArr[i-1],temp);
	if(pEvArr[i]<pEvArr[i-1]) 
	{
		temp=pEvArr[i]; 
		pEvArr[i]=pEvArr[i-1];
		pEvArr[i-1]=temp;
		temp=0; 
	}
	//printf("\nAfter swap: %d - %d + %d",pEvArr[i],pEvArr[i-1],temp);
}

void sortEvenElemAsc(int *pa, int size)
{
	int *pEvArr, sizeEvArr, count=0;
	sizeEvArr=countEven(pa,size);
	pEvArr=(int*)calloc(sizeEvArr,sizeof(int));
	for (int i=0;i<size;i++)
	{
		if(pa[i]%2==0)
		{
			pEvArr[count]=pa[i];
			printf("%d ",pEvArr[count]);
			count++;
		}
	}
	for(int j=0; j<count-1; ++j)
	{
		for(int i=count-1;i>j;i--)
		{
			//printf("\nPass %d: %d vs %d: ",j,pEvArr[i],pEvArr[i-1]);
			swapAsc(pEvArr,i);
		}
	}
	printf("\n");
	for (int i=0;i<count;i++)
	{
		printArrayAsc(pEvArr,i);
	}
	if (count==0) printf("There is no even number!");
	free(pEvArr);
	printf("\nEnd of function...");
}

void printArrayDesc(int *pArrDesc, int i)
{
		printf("a[%d]=%d\n",i,pArrDesc[i]);
}

int swapDesc (int *pArrDesc, int i)
{
	int temp=0;
	if(pArrDesc[i]<pArrDesc[i+1]) 
	{															
		temp=pArrDesc[i]; 
		pArrDesc[i]=pArrDesc[i+1];
		pArrDesc[i+1]=temp;
		temp=0; 
	}
}

void sortDescArray(int *pa, int size)
{
	int *pArrDesc;
	int temp=0;
	pArrDesc=(int*)calloc(size,sizeof(int));
	for (int i=0;i<size;i++)
	{
		pArrDesc[i]=pa[i];
	}
	printf("Sorting array in descending order...\n"); //bubble sort
	for(int j=0; j<size-1; ++j) //step to access array elem
	{
		for(int i=0;i<size-j-1;++i) //compare elem
		{
			swapDesc(pArrDesc,i);
		}
	}
for (int i=0;i<size;i++)
	{
		printArrayDesc(pArrDesc,i);
	}
	free(pArrDesc);
	printf("\nEnd of function...");
}

