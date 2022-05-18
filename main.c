#include "shell.h"
/**
 * main - implements a super simple shell
 *
 * Return: 0 if successfull. 1 otherwise.
 */
int main(void)
{
	char *input;
	int status, child_pid;
	char *argv[2];
	argv[1] = NULL;

	/* handle SIGINT */
	if (signal(SIGINT, sig_handler) == SIG_ERR)
		exit(98);

	while (1)
	{
		/* get input */
		input = prompt();
		if (input == NULL)
		{
			write(STDOUT_FILENO, "\n", 2);
			exit(0);
		}

		argv[0] = input;

		/* create process */
		child_pid = fork();
		if (child_pid == -1)
		{
			free(input);
			perror("fork Error!");
			return (1);
		}
		else if (child_pid == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
			{
				free(input);
				perror("exec Error!");
				return (1);
			}
		}
		wait(&status);
		free(input);
	}
	return (0);
}