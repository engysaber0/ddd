#include "shell.h"
/**
* validate_cmd - Validate and handle a command for execution.
* @arg: Array of strings containing the command and its arguments.
* @input_buff: Pointer to the user input buffer.
* @exit_num: Exit status for the "exit" command if provided.
* Return: 1 if the command is validated and ready for execution, 0 otherwise.
*/
int validate_cmd(char **arg, char *input_buff, int exit_num)
{
	if (handle_built_in(arg, input_buff, exit_num))
	{
		return (0);
	}
	if (!search_path(arg))
	{
		fprintf(stderr, "Command not found: %s\n", arg[0]);
		free_arg(arg);
		return (0);
	}

	return (1);
}
