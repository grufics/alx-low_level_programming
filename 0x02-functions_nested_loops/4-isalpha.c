#include "main.h"

/**
 * _isalpha - function for  lowercase or uppercase
 *
 * @c: parameter to print
 * Return: 1 or 0
 */

int _isalpha(int c)

{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
