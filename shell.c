#include "shell.h"
/**
 * read_command - Function that reads command entered by user.
 * @command: Command to be executed.
 * @size: Size of the command.
 *
 * Return: Always return 0.
 */

void read_command(char *command, int size)
{
	fgets(command, size, stdin);
	command[strcspn(command, "\n")] = '\0';
}

/**
 * main - Entry point of program.
 *
 * Return: Always return 0.
 */
int main(void)
{
	char command[140];

		while (1)
	{
		prompt();
		read_command(command, sizeof(command));
		command_exec(command);
	}

	return (0);
}
