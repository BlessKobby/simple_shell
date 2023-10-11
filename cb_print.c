#include "shell.h"

void cb_print(const char *text)
{
	write(1, text, strlen(text));
}
