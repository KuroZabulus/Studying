#include<stdio.h>
#include<stdlib.h>
#include<math.h>

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
							inputArr(pa,size); break;
			case 2: searchArray(pa,size); break;
			case 3: printPrime(pa,size); break;
			case 4: sortEvenElemAsc(pa,size); break;
			case 5: sortDescArray(pa,size); break;
			default: printf("Bye!\n");
		}
	}
	while (userChoice>0&&userChoice<6);
	free(pa);
	fflush(stdin);
	getchar();
	return 0;
}

/*int* allocArr(int *pa)
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
}

int checkPrime(int n) //take number n to check
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

void printPrime(int *pa, int size) 
{
	int n;
	int flag;
	for (int i=0;i<size;i++) //set current number to start at lolim, end at hilim
	{
		n=pa[i];
		flag=checkPrime(n); //pass current number to check for prime
		if(flag==1) //if number is prime, print number
		{
			printf("a[%d]=%d\n",i,pa[i]);
		}
	} //else, nothing happens, and number increase to the next
}

int countEven(int *pa, int size)
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
	if(pEvArr[i]>pEvArr[i+1]) 
	{
		temp=pEvArr[i]; 
		pEvArr[i]=pEvArr[i+1];
		pEvArr[i+1]=temp;
		temp=0; 
	}
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
	for(int j=0; j<size-1; ++j)
	{
		for(int i=0;i<size-j-1;++i)
		{
		swapAsc(pEvArr,i);
		}
	}
	printf("\n");
	for (int i=0;i<count;i++)
	{
		printArrayAsc(pEvArr,i);
	}
	free(pEvArr);
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
	printf("Sorting array in descending order...\n");
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
}

