#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>

#define SIZE_IN  1024
extern char **environ;

void print_prompt(int prompt);
ssize_t input_command(char **input, size_t *size);
ssize_t my_getline(char **buffer, size_t *buff_size, int fd);
int search_path(char **arg);
int execute_cmd(char **arg, char *input_buff);
int validate_cmd(char **arg, char *input_buff, int exit_num);
char *shell_sprintf(char *str, char *d, char *sc);
int handle_built_in(char **arg, char *input_buff, int exit_num);
int shell_strlen(char *str);
int shell_strcmp(char *str1, char *str2);
char *shell_strcat(char *des, char *sr);
char *shell_strcpy(char *des, char *sr);
void free_arg(char **arg);
char **tokenize_input(char *input_buff);
int count_spaces_tabs(char *str);
int execute_forked_cmd(char **arg, char *input_buff);
#endif
