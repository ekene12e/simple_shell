#include "shell.h"

/**
 * _strchr - search a string for a certain character
 * @strn: test string
 * @chr: character to find
 *
 * Return: pointer to index of first occurence and NULL otherwise
 */

char *_strchr(char *strn, int chr)
{
	while (*strn)
	{
		if (*strn == chr)
			return (strn);
		strn++;
	}
	return (NULL);
}
