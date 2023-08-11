#include <stdio.h>
/**
 * main - main block
 * Description: print all the letters except e && q
 * Return: 0
 */
int main(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++) {
	    if (c != 'e' && c != 'q') {
  		putchar(c);
	    }
	}
	
	putchar('\n');
	return (0);

}

