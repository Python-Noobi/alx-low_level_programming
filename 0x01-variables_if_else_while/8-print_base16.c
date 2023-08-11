#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int num = 0; num <= 9; num++) {
	  putchar(num + 48);
	}
	
		for (char c = 'a'; c <= 'f'; c++) {
	  putchar(c);
	}
	putchar("\n");
	return (0);
}
