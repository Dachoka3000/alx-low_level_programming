#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *  followed by a new line
 *   Return: Always 0 (Success)
 */

int main(void)
{
	char gru;

	for (gru = 'a'; gru <= 'z'; gru++)
	{
		putchar(gru);
	}
	putchar ('\n');
	return (0);
}
