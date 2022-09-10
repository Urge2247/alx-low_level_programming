#include<stdio.h>
/**
*main - prints the string in the prinf function
* Desciption: Using the main function
* This program prints the size of various types
* Return: 0
*/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;
	printf("size of char: %Id byte(s)\n", sizeof(c));
	prinf("size of int: %Id byte(s)\n", sizeof(i));
	printf("size of long int: %Id byte(s)\n", sizeof(li));
	printf("size long long int: %Id byte(s)\n", sizeof(lli));
	printf("size of float: %Id byte(s)\n, sizeof(f));
	return (0);
}
