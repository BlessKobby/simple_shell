#include "shell.h"
/**
 * main - Entry point for program.
 * @command: Command to be executed.
 * @size: Size of the command.
 *
 * Return: Always return 0.
 */
void read_command(char *command, int size);

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
