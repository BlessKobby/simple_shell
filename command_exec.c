#include "shell.h"

void command_exec(const char *execute)
{
	pid_t ch_pid = fork();

	if (ch_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (ch_pid == 0)
	{
		char *args[] = {execute, NULL};
		char *envp[] = {NULL};
        
		if (execve(execute, args, envp) == -1)
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
