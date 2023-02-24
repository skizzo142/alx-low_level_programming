#include "main.h"

/**
* print_number - Function that prints an integer.
* @n: int type number
* Description: Can only use _putchar to print.
*/
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	} else
	{
		n1 = n;
	}
	if (n1 / 10)
	{
		pint_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
