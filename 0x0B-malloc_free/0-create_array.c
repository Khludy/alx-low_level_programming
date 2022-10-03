#include "main.h"

/*
 * creates an array of chars, 
 * initializes it with a specific char
 * @size: size of the array
 * @c: char to initialize the array with
 * Return: NULL if sixe is zero or if it fails
 * pointer to array if everything is normal
 */

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int index;

if (size == 0)
	return (NULL);
array = malloc(size * sizeof(char));

if (array == NULL)
return (NULL);

for (index = 0; index < size; index++)
array[index] = c;

return (array);
}
