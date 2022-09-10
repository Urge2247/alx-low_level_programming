#include<stdio.h>
/**
*main - prints the string in the prinf function
*
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
	printf("Size of a char: %Id byte(s)\n", sizeof(c));
	prinf("Size of an int: %Id byte(s)\n", sizeof(i));
	printf("Size of a long int: %Id byte(s)\n", sizeof(li));
	printf("Size of a long long int: %Id byte(s)\n", sizeof(lli));
	printf("Size of a float: %Id byte(s)\n", sizeof(f));
	return (0);
}
