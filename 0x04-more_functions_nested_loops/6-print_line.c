#include "main.h"
/**
 * print+line - prints a straight line in terminal
 * @n: numver of times a character shpuld be repeated
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else

	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
