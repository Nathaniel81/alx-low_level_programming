#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure for a dog
 * @name: dogs name
 * @age: age of the dog
 * @owner: owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif

#ifndef MAIN_H
#define MAIN_H
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
