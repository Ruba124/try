#ifndef SHELL_H
#define SHELL_H

#define max 256
extern char **environ;
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#define MAX_order 100
#define MAX_PATH 256
void RA_print(char *letter);
void RA_env(void);
int RA_strcmp(char *s1, char *s2);
char *RA_strcpy(char *s1, char *s2);
char *RA_strcat(char *s1, char *s2);
int RA_strcspn(char *s1, char *s2);
char *RA_getenv(const char *name);
void RA_cd(char **com);
char *RA_strchr(char *s, char s2);
int RA_strlen(char *s);
char *RA_get(void);
void RA_hash(char *ohash);
int RA_func(char **farg, char *forder);
void RA_free(char **arg, char *order);
int RA_proc(char **args, char *order);
char *RA_path(char *order, char *path);
int RA_space(char R);
int RA_empty(const char *S);
char **RA_token(char *order);
#endif
