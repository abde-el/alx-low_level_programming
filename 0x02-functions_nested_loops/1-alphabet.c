#include "main.h"

/**
 * print_alphabet - Entry point
 * Return:0
*/

void print_alphabet(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}

}
