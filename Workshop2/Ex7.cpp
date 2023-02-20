#include <stdio.h>

int main()
{
    long long n;
    int count = 0;

    printf("Enter any number: ");
    scanf("%lld", &n);

    do
    {
      count++;
      //printf("Current count: %d\n",count); //debug
			n /= 10;
			//printf("Current num: %lld\n",n); //debug
    } 
		while(n != 0);

    printf("Total digits: %d", count);

    return 0;
}
