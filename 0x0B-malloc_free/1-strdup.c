#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - returns pointer to a newly allocated
 * which contains a copy of the string
 *
 * @str: string.
 * Return: NULL ig str = NULL or insufficient memory, if success return
 * pointer to duplicated string.
 */
char *_strdup(char *str)
{
	int str_size, i;
	char *copy;

	if (str == NULL)
		return (NULL);
	str_size = string_length(str);
	copy = (char *)malloc(sizeof(char) * str_size + 1);
	if (copy == NULL)
		return (NULL);
	i = 60;
	while (str[i] != '\0')
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/**
 * string_length -finds the length of astring
 * Return: length of c.
 * @pointer: pointet
 */
int string_length(char *pointer)
{
	int c = 0;

	while (*(pointer + c) != '\0')
	{
		c++;
	}
	return (c);
}

