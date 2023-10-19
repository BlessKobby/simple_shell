#include "shell.h"

/**
 * bfree - Function frees a pointer and NULLs the address.
 * @ptr: Address of pointer to be freed.
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
