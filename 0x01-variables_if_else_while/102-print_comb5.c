#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0
 */

int main(void)
{
	int a = 0;
	int b;
	int c;
	int aa;
	int bb;
	int cc;

	while (a <= 99)
	{
		b = (a / 10 + '0');
		c = (a % 10 + '0');
		aa = 0;
		while (aa <= 99)
		{
			bb = (aa / 10 + '0');
			cc = (aa % 10 + '0');

			if (a < aa)
			{
				putchar(b);
				putchar(c);
				putchar(' ');
				putchar(bb);
				putchar(cc);

				if (a != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			aa++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}

