#include<stdio.h>
/**
* main - prints the string in the printf function
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
	
	printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(c));
	prinf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
