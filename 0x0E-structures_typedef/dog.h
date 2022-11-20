#ifndef DOG_H
#define DOG_H

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;
/**
 * struct dog - struct that
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Desceiption: struct called
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, xhar *name, float age, xhar *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
