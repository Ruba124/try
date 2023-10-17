#include "shell.h"
/**
 * ra_proc - function
 */
int RA_proc(char **args, char *order)
{
	pid_t p;
	int RA_status = 0;
	char *r;
	char *path = RA_getenv("PATH");
	char *com = NULL;

	p = fork();
	r = RA_strchr(order, '/');
	if (p == 0)
	{
		if (r == NULL)
		{
			com = RA_path(order, path);
			if (!com)
			{
				perror(args[0]);
				return (127);
			}
		}
		else
		{
			com = order;
		}
		if (execve(com, args, environ) == -1)
		{
			perror(args[0]);
			free(order);
			free(args);
			return (127);
		}
	}
	else
	{
		waitpid(p, &RA_status, 0);
	}
	return (WEXITSTATUS(RA_status));
}













/**
 * RA_path - function
 */
char *RA_path(char *order, char *path)
{
	char *RA_token;
	char *RA_path = NULL;

	RA_token = strtok(path, ":");

	 for(; RA_token != NULL;RA_token = strtok(NULL, ":"))
	{
		RA_path = malloc(RA_strlen(RA_token) + RA_strlen(order) + 1);
		if (RA_path == NULL)
		{	 return (NULL); }
		RA_strcpy(RA_path, RA_token);
		RA_strcat(RA_path, "/");
		RA_strcat(RA_path, order);
		if (access(RA_path, X_OK) == 0) 
		{	return (RA_path); }
		free(RA_path);
	}
	 return (NULL);
}

