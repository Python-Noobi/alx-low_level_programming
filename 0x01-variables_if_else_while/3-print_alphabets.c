#include <stdio.h>
/**
 * main - main block
 * Description:  prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
  char c;
  
  for (c = 'a'; c <= 'z'; c++) 
    putchar(c);
  for(c = 'A'; c <= 'Z'; c++) 
    putchar(c);
  putchar('\n');
  return (0);
}
