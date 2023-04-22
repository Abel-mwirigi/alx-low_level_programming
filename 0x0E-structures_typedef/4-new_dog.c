#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name:pointer to dog name
 * @age:pointer to dog age
 * @owner:pointer to owner
 * Return:NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i;
	int j;
	int k;
	int l;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	new_dog->name = malloc(sizeof(char) * (i + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (j + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		new_dog->name[k] = name[i];
	for (l = 0; l < j; l++)
		new_dog->owner[l] = owner[l];
	new_dog->age = age;
	return (new_dog);
}
