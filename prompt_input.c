#include "shell.h"
/**
 * prompt - gets input from user
 *
 * Return: string containing user input. Otherwise NULL
 */
char *prompt(void)
{
	size_t size = 10;

	/* allocate space for buf */
	buf = malloc(sizeof(char) * size);
	if (buf == NULL)
		return (NULL);

	printf("#cisfun$ ");

	/* get input */
	if (getline(&buf, &size, stdin) == -1)
	{
		free(buf);
		return (NULL);
	}

	/* remove newline and return */
	return (strip_newline(buf));
}

/**
 * strip_newline - removes newline character from a string
 * @str: string
 *
 * Return: string with newline character stripped
 */
char *strip_newline(char *str)
{
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '\n')
		{
			str[i] = '\0';
			break;
		}
	}

	return (str);
}