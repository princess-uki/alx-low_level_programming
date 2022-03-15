#include "_putchar.h"
/**
 * main - Entry block
 * Description: prints _putchar
 * Return: 0
 */
int main(void)
{
	char c[10] = "_putchar";

	int i = 0;

	while (i < 9)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
#include "main.h"
/**
 * main - entry point
 *Description: print string
 *
 * Return: 0 always
 */
int main(void)
{
	char *s = "_putchar";

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
	return(0);
}
