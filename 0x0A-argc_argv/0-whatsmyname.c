#include <stdio.h>
/**
 * main - Write a program that prints its name, followed by a new line.
 * @argc: The number of command line arguments
 * @argv: The program name
 * Return: always 0
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
