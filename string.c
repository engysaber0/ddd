#include "shell.h"

/**
 * shell_strcpy - Copy a string from source to destination.
*@des: Pointer to the destination buffer.
*@sr: Pointer to the source string.
*Return: Pointer to the destination buffer (des).
*/
char *shell_strcpy(char *des, char *sr)
{
	int i = 0;

	while (*(sr + i))
	{
		*(des + i) = *(sr + i);
		i++;
	}
	*(des + i) = '\0';
	return (des);
}
/**
* shell_strlen - Calculate the length of a string.
* @str: Pointer to the input string.
* Return: Length of the string (number of characters).
*/
int shell_strlen(char *str)
{
	int len = 0, i = 0;

	while (*(str + i) != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
/**
* shell_strcat - Func to concatenate 2 strings and return the result.
* @des: string.
* @sr: string.
* Return: Return the pointer to the concatenated string.
*/
char *shell_strcat(char *des, char *sr)
{
	int des_len = 0, i = 0;

	while (des[des_len])
		des_len++;

	while (sr[i])
	{
		des[des_len] = sr[i];
		des_len++;
		i++;
	}
	des[des_len] = '\0';
	return (des);
}
/**
* shell_strcmp - Func to compare two strings lexicographically.
* @str1: First string
* @str2: Second string
* Return: The difference between the differing characters ASCII values
*/
int shell_strcmp(char *str1, char *str2)
{
	int i;

	for (i = 0; str1[i] == str2[i]; i++)
	{
		if (str1[i] == '\0')
		{
			return (0);
		}
	}
	return (str1[i] - str2[i]);
}
