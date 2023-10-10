#ifndef _dog_H
#define _dog_H

/**
 * struct dog - wdwd
 * @name: hdcuecnu
 * @age: hjdchw
 * @owner: jdwkdj
 *
 * Description: wceuineiui
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
