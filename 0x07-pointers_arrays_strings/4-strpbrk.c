#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer name
 * @accept: pondter name
 * Return:  pointer to the byte in s that matches one of the bytes in accept
 * NULL will if no such pyte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != 0; b++)
		{
			if (s[a] == accept[b])
				return (s + a);
		}


	}
	return ('\0');
}
