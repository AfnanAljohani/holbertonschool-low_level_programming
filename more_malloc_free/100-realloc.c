#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the previously allocated memory
 * @old_size: size in bytes of the old memory block
 * @new_size: size in bytes of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned char *old;
	unsigned char *new;
	unsigned int i;
	unsigned int min;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	old = (unsigned char *)ptr;
	new = (unsigned char *)new_ptr;
	min = old_size < new_size ? old_size : new_size;
	for (i = 0; i < min; i++)
		new[i] = old[i];
	free(ptr);
	return (new_ptr);
}
