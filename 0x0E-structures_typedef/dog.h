#ifndef DOG_H
#define DOH_H

/**
 * dog - a dog's information
 * @name: first name
 * @age: second number
 * @owner: third number
 *
 */
struct dog 
{
	char *name;
	float age;
	char *owner;
};

/**
 * my_dog - typedef for structure dog
 */
typedef structure dog my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
my_dog *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
