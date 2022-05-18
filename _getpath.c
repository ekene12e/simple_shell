#include "shell.h"

/**
 * _getpath - functions to find and return the PATH variable
 * for the global environment vector
 *
 * Return: PATH, if found, or NULL otherwise
 */

char *_getpath(void)
{
	int j = 0;
	char **env = environ;
	char *path = NULL;

	while (*env)
	{
		if (_strncmp(*env, "PATH=", 5) == 0)
		{
			path = *env;
			while (*path && j < 5)
			{
				path++;
				j++;
			}
			return (path);
		}
		env++;
	}
	return (NULL);
}
