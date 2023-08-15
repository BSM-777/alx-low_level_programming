#include "dog.h"

/**
 *init_dog - initialize a variable
 *@d: the dog to init
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 *
 * Description:  a function that initialize a variable of type struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
