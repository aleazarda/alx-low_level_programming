#include <stdio.h>

/**
  * main - Prints the numbers since 0 to 100
  *
  * Return: Always (Success)
  */
int main(void)
{
	char n;

	for (n = '0'; n <= '100'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
