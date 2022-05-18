#include "shell.h"

/**
 * _strlen - length of a string
 * @str: given string
 *
 * Return: length of string
 */

int _strlen(const char *str)
{
	size_t i = 0;

	while (str[i])
		i++;
	return (i);
}
