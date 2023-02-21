#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char i;
	int count;

	count = 0;
	while (count < 10)
	{
		for (i = 'a' ; i <= 'z'; i++)
		{
			_putchar(i);
		}

		count++;
		_putchar('\n');
	}
}
