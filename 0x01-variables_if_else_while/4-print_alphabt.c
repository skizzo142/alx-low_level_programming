#include <stdio.h>
/**
 * main - A program that prints alphabet in lowercase except qe
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if ((c != 'q' && c != 'e') && c <= 'z')
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

