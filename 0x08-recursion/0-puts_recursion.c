#include "main.h"

/**
 * _puts_recursion - function that prints a string
 *@s: string to be printed
 * Return: string
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_putchar(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}