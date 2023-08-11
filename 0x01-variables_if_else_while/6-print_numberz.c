#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	for (int num = 0; num < 10; num++) 
	  putchar(48 + num);
	
	putchar("\n");
	return (0);
}
