#include "shell.h"

/**
* shell_sprintf - Concatenate three strings and return the result.
* Calculate the total length needed for the concatenated string.
* including the null-terminator.
* @str: The string to be concatenated.
* @d: The delimiter to be concatenated.
* @sc: The source string.
* Return: the pointer to the concatenated string.
*/

char *shell_sprintf(char *str, char *d, char *sc)
{
	int len_str, len_d, len_sc;
	char *new_str;

	len_str = strlen(str);
	len_d = strlen(d);
	len_sc = strlen(sc);

	new_str = malloc((len_str + len_d + len_sc + 1) * sizeof(char));
	if (new_str == NULL)
	{
		perror("Error: malloc failed in _sprintf");
		exit(EXIT_FAILURE);
	}

	strcpy(new_str, str);
	strcat(new_str, d);
	strcat(new_str, sc);

	return (new_str);
}
