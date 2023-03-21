#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new type struct dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: A user defined datatype that combine
 * data items of different kinds.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif