#include "shell.h"
#include <sys/types.h>
/**
 * command_exec -  Execute a program as new process.
 * @execute: The command to be executed.
 *
 * Return: No return value. Program is executed or errors handled.
*/
void command_exec(char *execute)
{

	pid_t ch_pid = fork();

	if (ch_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (ch_pid == 0)
	{
		char *args[] = {(char *)execute, NULL};
		char *envp[] = {NULL};

		if (execve((char *)execute, args, envp) == -1)
		{
			perror("execve");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(NULL);
	}
}
