#include "shell.h"
/**
 * cb_print - Function to write to standard output.
 * @text: Text to display to standard output.
 *
 * Return: Nothing to return.
 */
void cb_print(const char *text)
{
	write(1, text, strlen(text));
}
