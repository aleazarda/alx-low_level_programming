#include "main.h"

/**
 * print_alphabet_x10 - ALX project code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
   int j = 0;
	
	while (j < 10)
		
	{
		char alp = 'a';
    while (alp <= 'z')
    {
		_putchar (alp);
		alp++;
    }

	
	_putchar ('\n');
	j++;
		
	}
}
