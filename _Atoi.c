#include "shell.h"

/**
 * interactive - a function that returns true if shell is interactive mode.
 * @info: address structure.
 *
 * Return: 1 interactive mode, 0 not interactive.
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - a function that checks if character is a delimeter.
 * @c: a character to check.
 * @delim: Delimeter string.
 * Return: 1 if successful, 0 if failed.
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 *_isalpha - a function that checks for alphabetic character.
 *@c: Input character.
 *Return: C is alphabetic 1, 0 if failed.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 *_atoi - a function that converts a string to an integer.
 *@s: String to be converted.
 *Return: 0 if no numbers in string.
 */

int _atoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0;  s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}
