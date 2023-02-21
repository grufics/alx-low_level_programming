#include "main.h"

/**
 * _islower - the funtion to compare
 * @c: contains parameter to be compared
 * Return: 1 if lowercase and 0 if otherwise
 */
int _islower(int c)

{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
