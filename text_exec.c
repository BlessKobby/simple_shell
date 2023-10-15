#include "shell.h"
#include <sys/types.h>
#include <sys/wait.h>

/**
 * text_exec -  Execute a program as new process.
 * @text: The text to be executed.
 *
 * Return: No return value. Program is executed or errors handled.
*/
void text_exec(const char *text)
{
	char *args[128];
	int arg_count = 0;

	pid_t ch_pid = fork();

	if (ch_pid == -1)
	{
		cb_print("Error forking process.\n");
		exit(EXIT_FAILURE);
	}
	else if (ch_pid == 0)
	{

		char *token = strtok((char *)text, " ");

		while (token != NULL)
		{
			args[arg_count++] = token;
			token = strtok(NULL, " ");
		}
		if (arg_count == 0)
		{
		exit(EXIT_FAILURE);
		}
	}
	args[arg_count] = NULL; /* Array of arguments terminated by Null */

	/* Execution of command */
	if (execve(args[0], args, NULL) == -1)
	{
		/* Print an error message when execve system call fails */
		cb_print("Error executing command.\n");
		exit(EXIT_FAILURE);

	}
	else
	{
		/* Parent process shold... */
		wait(NULL);
	}
}