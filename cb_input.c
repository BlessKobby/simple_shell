#include "shell.h"

/**
 * text_read - A function that reads user imputs.
 * @text: Text entered by user.
 * @size: Size of text entered by user.
 *
 * Return: Void.
 */

void text_read(char *text, size_t size)
{
		if (fgets(text, size, stdin) == NULL)
		{
			if (feof(stdin))
			{
				cb_print("\n");
				exit(EXIT_SUCCESS);
			}
		}

			else
			{
				cb_print("Error occurred while reading input.\n");
				exit(EXIT_FAILURE);
			}
	text[strcspn(text, "\n")] = '\0';
}
