#include "shell.h"

/**
 *_eputs - a function that prints an input string.
 * @str: a string to be printed.
 *
 * Return: NULL.
 */
void _eputs(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}

/**
 * _eputchar - a function that writes the character c to standard error.
 * @c: a character to print.
 *
 * Return: On successful execution 1.
 * On failed execution, -1 is returned, and errno is set.
 */
int _eputchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _putfd - a function that writes the character c to given filedescriptor.
 * @c: a character to print.
 * @fd: Filedescriptor.
 *
 * Return: On successful execution 1.
 * On Failure, -1 is returned, and errno is set.
 */
int _putfd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 *_putsfd - a function that prints an input string.
 * @str: a String to be printed.
 * @fd: Filedescriptor.
 *
 * Return: Number of put chars.
 */
int _putsfd(char *str, int fd)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str)
	{
		i += _putfd(*str++, fd);
	}
	return (i);
}
