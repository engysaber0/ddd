#include "shell.h"
/**
* free_arg - Free memory allocated for an array of strings.
* This function is used to deallocate memory that was dynamically
* allocated for an array of strings, where the last element is NULL.
*
* @arg:  Array of strings to be freed.
*
* Return: void
*/
void free_arg(char **arg)
{
	int i = 0;

	while (arg[i] != NULL)
	{
		free(arg[i]);
		i++;
	}
	free(arg);
}
