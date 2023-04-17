#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - this function returns the length of a string
 * @s: the string which is to be evaluated
 *
 * Return: the length of the string considered.
 */
int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
/**
 * *_strcpy - this function copies the string pointed
 * to by src including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @src: the string to be copied
 * @dest: the pointer to the buffer in which the string is to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int size1, i;

	size1 = 0;

	while (src[size1] != '\0')
	{
		size1++;
	}
	for (i = 0; i < size1; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - this function creates a new dog
 * @owner: the owner of the dog
 * @name: the name of the dog
 * @age: the age of the dog
 * Return: the pointer to the new dog(Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lenx, leny;

	lenx = _strlen(name);
	leny = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (lenx + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (leny + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
