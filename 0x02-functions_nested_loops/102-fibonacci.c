#include <stdio.h>
/**
 * main - the main function
 *
 * Return: Always 0
 */
int main(void)
{
	long int i, x = 1, y = 2, sum = 0;

	for (i = 0; i < 49; i++)
	{
		printf("%ld, ", x);
		sum = x + y;
		x = y;
		y = sum;
		if (i == 48)
			printf("%ld\n", x);
	}
	return (0);
}
