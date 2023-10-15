#include "shell.h"
/**
* tokenize_input - Tokenize a user input string into an array of strings.
* @buff_size: Pointer to the user input buffer.
* Return: Array of tokenized strings obtained from the input
*/
char **tokenize_input(char *buff_size)
{
	char **arg = NULL, *sep = " \n\t", *tmp;
	int i = 0;

	tmp = strtok(buff_size, sep);

	while (tmp != NULL)
	{
		arg = realloc(arg, (i + 2) * sizeof(char *));
		arg[i] = malloc(strlen(tmp) + 1);
		strcpy(arg[i++], tmp);
		tmp = strtok(NULL, sep);
	}

	arg[i] = NULL;
	free(tmp);
	return (arg);
}
