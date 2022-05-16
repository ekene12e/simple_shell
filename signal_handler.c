#include "shell.h"
/**
 * sig_handler - handles SIGINT
 * @sig: SIGINT
 */
void sig_handler(int sig)
{
	free(buf);
	(void)sig;
	write(STDOUT_FILENO, "\n", 2);
	exit(0);
}