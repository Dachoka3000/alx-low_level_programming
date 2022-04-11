#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type struch dog
 * @d: pointer to the struct
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
