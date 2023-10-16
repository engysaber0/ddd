#include "shell.h"

/**
 * c_deli - check if char is equal to any delimiter in the delimiters string
 *
 * @y: character
 * @delimiters: null-terminated string containing delimiters
 *
 * Return: 0 if it doesn't match any delimiter, 1 if it matches
 */
int c_deli(char y, const char *delimiters)
{
int i;

    for (i = 0; delimiters[i]; i++)
    {
        if (y == delimiters[i])
        {
            return 1;
        }
    }
    return 0;
}

/**
 * token_strtok - tokenize a string based on delimiters
 * @pointer: string to be tokenized
 * @delimiters: null-terminated string containing delimiters
 *
 * Return: individual tokens as an array of strings
 */
char *token_strtok(char *pointer, const char *delimiters)
{
    static char *arr;
    char *result = NULL;
    int is_space = 0;

    if (pointer)
    {
        arr = pointer;
    }

    if (!arr || !*arr)
    {
        return NULL;
    }

    while (c_deli(*arr, delimiters))
    {
        arr++;
    }

    if (*arr == '\0')
    {
        return NULL;
    }

    result = arr;

    while (*arr && !c_deli(*arr, delimiters))
    {
        arr++;
    }

    if (*arr == '\0')
    {
        is_space = 1;
    }

    *arr = '\0';
    arr += is_space;

    return result;
}
