#include "shell.h"

/**
 * bfree - a function that frees a pointer and NULLs the address.
 * @ptr: an address of pointer to be freed.
 *
 * Return: 1 - Memory Freed, if not  0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
