#ifndef DOG_H
#define DOG_H
#include <stdlib.h>

/**
 * struct dog - new structure with 3 members
 * @name: saves name
 * @age: saves age
 * @owner: records the owner of data
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
