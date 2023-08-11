#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
  for (int num = 0; num <= 9; num++) {
    putchar(num + 48);
    if (num != 9) {
      putchar(',');
      putchar(' ');
    }
  }
  
  putchar("\n");
  
  return (0);
}
