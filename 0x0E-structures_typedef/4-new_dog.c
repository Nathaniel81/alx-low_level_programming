#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @s: string input
 * Return: pointer to the duplicated string
 */
char *_strdup(char *s)
{
	int i, len;
	char *str;

	if (s == NULL)
		return (0);

	for (len = 0; s[len]; len++)
	;

	str = malloc(sizeof(char) * len + 1);

	if (str == 0)
		return (0);

	for (i = 0; i <= len; i++)
		str[i] = s[i];

	return (str);
}
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: 1 0n success, -1 on error
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(struct dog));

	if (new_dog == 0 || name == 0 || owner == 0)
		return (0);

	new_dog->name = _strdup(name);
	if (!new_dog->name)
	{
		free(new_dog);
		return (0);
	}
	new_dog->age = age;
	new_dog->owner = _strdup(owner);

	if (!new_dog->owner)
	{
		free(new_dog);
		free(new_dog->name);
		return (0);
	}
	return (new_dog);
}
