
/**
 * print_name - function that prints a name
 * @name: name to print
 * @f: pointer to function print
 * Return: always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
