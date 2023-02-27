#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: input
 * Return: half of input
 */
int puts_half(char *str)
{
	int i = 0, len = 0, n;

	while (str[i])
		len++;

	if ((len % 2) == 0
			n = len / 2;

	else
		n = (len + 1) / 2;

	for (i = n; i < len; i++)
		putchar(str[i]);

	putchar('\n');
}
