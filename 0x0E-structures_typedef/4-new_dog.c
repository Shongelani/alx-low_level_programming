#include "dog.h"
#include <stdlib.h>
/**
 * _strcpy -  copy string
 * @dest: pointer
 * @src: string to be copied
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y;

	while (*(src + x) != '\0')
	{
		x++;
	}
	for (y = 0; y < x; y++)
	{
		dest[y] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}
/**
 * _strlen - a function that returns the length of a string
 * @s: input string
 * Return: string length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * new_dog - a dunction that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int length1, length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
	{
		return (NULL);
	}
	newDog->name = malloc(sizeof(char) * (length1 + 1));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	newDog->owner =  malloc(sizeof(char) * (length2 + 1));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	_strcpy(newDog->name, name);
	_strcpy(newDog->owner, owner);
	newDog->age = age;

	return (newDog);
}
