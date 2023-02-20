#include <stdio.h>

void PrintMinMax(int n)
{
    int digit; 
    int min, max;
    digit=n%10; //new digit from number 3
    n=n/10; //new number removing smallest digit 1029
    min=digit; //take first digit as base to compare min 3 max 3 
    max=digit;
    while (n>0) //run as long as there are still digit left
    {
      digit=n%10; //take next digit 
      n=n/10; //update the number 
      if (min > digit) 
			{
				min=digit; 
			} 
      if (max < digit) 
      {
				max=digit; 
			}
    }
   printf("Max digit : %d\n", max);
   printf("Min digit : %d\n", min);
}

int main()
{
  int n;
  do 
	{
		printf("Type a positive integer: ");
    scanf("%d", &n);
  } 
	while(n<0);
	PrintMinMax(n);
  getchar();
  return 0;
}

