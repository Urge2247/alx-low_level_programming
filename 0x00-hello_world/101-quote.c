#include <stdio.h>
#include <unistd.h>
/**
* main - prints the string in C program
*
* Description: using the main function
* this program prints and that piece of art is useful" - Dora Korpar, 2015-10-1
* Return: (1)
*/
int main(void)
{

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}

