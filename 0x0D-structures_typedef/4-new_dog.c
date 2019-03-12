#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - allocates a new space in memory for a copy of a string.
 * @str: string to be duplicated.
 *
 * Return: pointer to a duplicated string.
 */

char *_strdup(char *str)
{
	char *str2;
	int length, str2_size, copy;

	if (str == 0)
	return (0);

	length = 0;
	while (str[length] != 0)
	{
		length++;
	}

	str2_size = length + 1;

	str2 = malloc(str2_size * sizeof(char));

	if (str2 == 0)
		return (0);

	copy = 0;
	while (copy < str2_size)
	{
		str2[copy] = str[copy];
		copy++;
	}
	return (str2);
}


/**
 * new_dog - creates a new dog.
 * @name: name of new dog.
 * @age: age of new dog.
 * @owner: owner of new dog.
 *
 * Return: pointer to the new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	if (name != NULL)
	{
		dog->name = _strdup(name);
	}
	dog->age = age;
	if (owner != NULL)
	{
		dog->owner = _strdup(owner);
	}
	return (dog);
}
