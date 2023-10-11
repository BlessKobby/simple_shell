#include "shell.h"
/**
 * main - Entry point for program.
 * Return: Always return 0.
 */
int main(void)
{
	char command[140];

	while (1)
	{
		_prompt();
		read_command(command, sizeof(command));
		command_exec(command);
	}

	return (0);
}
