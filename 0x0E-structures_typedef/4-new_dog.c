#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: pointer to a char for name of dog
 * @age: age of dog
 * @owner: pointer to a char for owner of dog
 * Return: pointer to a new dog of type dog_t
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
int nameLen, ownerLen, i;
dog_t *newDog;

d1 = (dog_t *)malloc(sizeof(dog_t));
if (newDog == NULL)
{
return (NULL);
}
nameLen = ownerLen = 0;
while (name[nameLen++])
{
;
}
while (owner[ownerLen++])
{
;
}
newDog->name = malloc(nameLen * sizeof(newDog->name));
if (newDog->name == NULL)
{
free(newDog);
return (NULL);
}
for (i = 0; i <= nameLen; i++)
{
newDog->name[i] = name[i];
}
newDog->age = age;
newDog->owner = malloc(ownerLen * sizeof(newDog->owner));
if (newDog->owner == NULL)
{
free(newDog->name);
free(newDog);
return (NULL);
}
for (i = 0; i <= ownerLen; i++)
{
newDog->owner[i] = owner[i];
}
return (newDog);
}
