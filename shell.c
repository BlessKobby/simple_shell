#include "shell.h"
/**
 * read_text - Function that reads text entered by user.
 * @text: Text to be executed.
 * @size: Size of the text.
 *
 * Return: Always return 0.
 */

void read_text(char *text, int size)
{
	fgets(text, size, stdin);
	text[strcspn(text, "\n")] = '\0';
}

/**
 * main - Entry point of program.
 *
 * Return: Always return 0.
 */
int main(void)
{
	char text[140];

		while (1)
	{
		prompt();
		read_text(text, sizeof(text));
		text_exec(text);
	}

	return (0);
}
