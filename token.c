#include "shell.h"
/**
 * RA_func - function
 * @farg:first parameter
 * @forder:second parameter
 * Return:num
 */
int RA_func(char **farg, char *forder)
{
	if (RA_strcmp(farg[0], "cd") == 0)
	{
		RA_cd(farg);
		free(forder);
		free(farg);
		return (2);
	}
	if (RA_strcmp(forder, "env") == 0)
	{
		RA_env();
		free(forder);
		free(*farg);
		return (2);
	}
	if (RA_strcmp(forder, "exit") == 0)
	{
		free(forder);
		free(*farg);
		return (-1);
	}
	return (0);
}
/**
 * RA_hash - function
 * @ohash:parameter
 */
void RA_hash(char *ohash)
{
	char *l;

	l = RA_strchr(ohash, '#');
	if (l != NULL)
	{
		*l = '\0';
	}
}
