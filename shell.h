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
void my_free(char **arg);
char *my_sprintf(char *s1, char *s2, char *s3);
int my_sp_tab(char *str);
int valid_cmd(char **arg, char *input_buff, int exit_num);
int builtin_func(char **arg, char *input_buff, int exit_num);
int my_strlen(char *str);
int my_strcmp(char *str1, char *str2);
char *my_strcat(char *des, char *sr);
char *my_strcpy(char *des, char *sr);

int c_deli(char y, const char *delimeter);
char *token_strtok(char *pointer, const char *delimiters);

int search_path(char **arg);
int execute_cmd(char **arg, char *input_buff);
/*char **tokenize_input(char *input_buff);*/
int execute_forked_cmd(char **arg, char *input_buff);
#endif
