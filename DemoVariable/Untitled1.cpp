#include<stdio.h>

int main()
{
	int a=1000;
	char s=63;
	float d=69.42;
	printf("value of a: %d",a);
	printf("\nsize of a: %d",sizeof(a));
	printf("\naddress of a: %u",&a);
	printf("\n------------");
	/*"%d",a: print the value in variable a in decimal (%d)*/
	/*sizeof(a): print the ??? size of the value in variable a*/
	/*"%u",&a: print the address (&variable) of the value in a in unsigned int (&u)*/
	printf("\nvalue of s\x3F: %c",s);
	printf("\nsize of s: %d",sizeof(s));
	printf("\naddress of s: %u",&s);
	printf("\n------------");
	/*"\x3F: %c",s: print the char of the hex (\x3F=?), print var s in character form (%c) = ?*/
	printf("\nvalue of d: %.3f",d);
	printf("\nsize of d: %d",sizeof(d));
	printf("\naddress of d: %u",&d);
	printf("\n------------");
	/*"%.3f",d: print the value in variable d in floating point (%f), taking 3 decimal point (%.3f)*/
	getchar();
	/*getchar(): wait for user input, in this case, any input*/
	return 0;
}
