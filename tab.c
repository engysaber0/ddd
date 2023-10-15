#include "shell.h"
/**
* count_spaces_tabs - Checks if a string consists only of spaces and tabs.
* @str: Pointer to the user input buffer.
* Return: 0 if the string contains characters other than spaces and tabs,
* 1 if the string consists only of spaces and tabs.
*/
int count_spaces_tabs(char *str)
{
	while (*str)
	{
		if (*str != ' ' && *str != '\t')
			return (0);
		str++;
	}
	return (1);
}
