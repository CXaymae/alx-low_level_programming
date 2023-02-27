#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input
 *
 * Return: nothing on success
 */
int puts_half(char *str)
{
	int i = 0, n;

	while (str[i])
	{
		i++;
		str++;
	}

	for (n = 0; n < i; n++)
		str--;

	n = (i % 2 == 0) ? i / 2 : (i + 1) / 2;
		_puthar(str[n]);

	for (; n < i; n++)
		_putchar(str[i]);

	_putchar('\n');
}
