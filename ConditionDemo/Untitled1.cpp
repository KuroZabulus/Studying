#include<stdio.h>

//if else + shorthand demo
/*int main()
{
	float mark; 
	int reward;
	
	printf("What\'s your score? ");
	scanf("%f",&mark);
	reward = mark>=8.0? 500000:0;
	//shorthand for if (mark>=8.0) reward=500000; else reward=0;
	printf("For score %.1f, reward: %d",mark,reward);
	getchar();
}*/

//switch demo
/*int main()
{
double num1, num2;
char op;
double result;
    printf("State your problem: ");
    scanf("%lf %c %lf",&num1,&op,&num2);
  switch (op)
  {   
		case '+' : result = num1 + num2;
      printf("%.2lf",result);
      break;
    case '-' : result = num1 - num2;
    	printf("%.2lf",result);
      break;
    case '*' : result = num1 * num2;
      printf("%.2lf",result);
      break;
    case '/' : if ( num2==0)
      	printf("Divide by 0");
      else
        { 
					result = num1 / num2;
          printf("%.2lf",result);
        }
    	break;
  	default: printf("Op is not supported");
	}
getchar();
return 0;
}*/

//for demo
/*int main()
{
	for (int i=1;i<=15;i++)
	{
		printf("Numero: %d\n",i);
	}
	getchar();
	return 0;
}*/

//while demo
/*int main()
{
	int i=1;
	while (i<=15)
	{
		printf("kekw"); //if no i++ it will print forever
		i++;
	}
	getchar();
	return 0;
}*/

//do while demo
/*int main()
{
	int i=1;
	do
	{
		printf("Dakbuhlmao x%d\n",i);
		i++;//same thing as while demo
	}
	while (i<=15);//this while has to be outside of the do block
	getchar();
	return 0;
}*/

//do while example practical application
int main()
{
	int x;
	int sum=0;
	printf("Enter n integer for sum, stop by typing 0: ");
	do
	{
		scanf("%d",&x);
		sum += x; //shorthand for sum=sum+x;
	}
	while (x!=0);
	printf("Sum of all integer = %d",sum);
	getchar();
	return 0;
}
