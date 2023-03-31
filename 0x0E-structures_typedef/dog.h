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

/* list of prototypes*/

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
