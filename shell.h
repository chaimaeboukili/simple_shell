#ifndef SHELL_H
#define SHELL_H
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include <sys/stat.h>
#define BUFFER_LEN 1024
extern char **environ;

char *concat_all(char *s1, char *s2);
char *find_path(char *av);
char **split(char *line, int bufsize);
int check_builtin(char *argvv);
void print_env(void);
void exec_builtins(char **argvv, int i);
void execute_cmd(char **argvv);
void ft_exit(char **argvv);
void change_directory(char **argvv);
int _strcmp(char *s1, char *s2);
int _atoi(char *s);
int _strlen(char *s);
char *read_string();
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *_getenv(char *env);


int _help(char **args);
int _ctrld(char **args);
char *builtin_str[] = {"cd", "help", "exit", "^D"};
int (*builtin_func[]) (char **) = {&_cd, &_help, &_exit, &_ctrld};
int _num_builtins(void);
int _fork_fun(char **arg, char **av, char **env, char *lineptr, int np, int c);
char *find_path(char *av);
char *_getenv(char *env);
char *_strcpy(char *dest, char *src);
char *concat_all(char *str1, char *str2);
int _strcmp(char *str1, char *str2);
int _atoi(char *str);
int _strlen(char *str);
char **split(char *lineptr);
void print_env(void);
void change_directory(char **av);
void ft_exit(char **av);
void exec_builtins(char **av, int index);
int values_of_path(char **arg, char **env);


#endif

