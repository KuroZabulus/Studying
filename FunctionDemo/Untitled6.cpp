#include <stdio.h>
/*void swap( int a, int b)
{  int t;
   printf("In swap, var. a, add.:%u, value:%d\n", &a, a); 
   printf("In swap, var. b, add.:%u, value:%d\n", &b, b); 
   printf("In swap, var. t, add.:%u, value:%d\n", &t, t); 
   t = a;
   a = b;
   b = t;
}
int main()
{  int x = 5, y = 7;
   printf("In main, var. x, add.:%u, value:%d\n", &x, x);
   printf("In main, var. y, add.:%u, value:%d\n", &y, y);
   printf("Addr. of main(): %u\n", &main);
   printf("Addr. of swap(...): %u\n", &swap);
   swap (x, y);
   printf("After swapping x and y\n");
   printf("x=%d, y=%d\n", x, y);
   getchar();
   return 0;
}
*/
int sum(int a, int b)
{
	int t=a+b;
	return t;
}

int main()
{
	int x=5,y=6;
	int z=sum(x,y); //this sum carry the return value of the function (t)
	printf("Result:%d\n",z);
	getchar();
	return 0;
}
