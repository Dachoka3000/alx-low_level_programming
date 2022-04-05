#include "main.h"

int _strlen(char *s)
{
	int i;
	int len;

	i = 0;
	len = 0;

	while (*(s + i) != '\0')
	{
		len = len + 1;
		i++;
	}
	return (len);
}


char *_strcat(char *dest, char *src)
{
	int lendest;
	int lensrc;
	int lenfdest;
	int i;

	lendest = _strlen(dest);
	lensrc = _strlen(src);
	lenfdest = lendest + lensrc;
	i = 0;
	while (lendest <= lenfdest)
	{
		*(dest + lendest) = *(src + i);
		lendest++;
		i++;
	}
	return (dest);
}
