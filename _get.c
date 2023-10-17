#include "shell.h"
/**
 * RA_get - function
 */
char *RA_get(void)
{
	char *order = NULL;
	size_t s = 0;
	ssize_t ret;

	if (isatty(STDIN_FILENO))
	{
		RA_print("$ "); 
	}
	ret = getline(&order, &s, stdin);
	if (ret == -1)
	{
		free(order);
		return(NULL);
	}
	return (order);
}
/**
 * RA_token - function
 */
char **RA_token(char *order)
{
	char *RA_del = " \n\t";
	char **RA_args = NULL;
	int l;
	char *RA_token = NULL;

	RA_args = malloc(sizeof(char *) * 30);
	if (RA_args == NULL)
	{	return (NULL); }

	RA_token = strtok(order, RA_del);
	if (RA_token == NULL)
	{
		free(order);
		return (NULL);
	}
	for (l = 0; RA_args != NULL; l++)
	{
		RA_args[l] = RA_token;
		RA_token = strtok(NULL, RA_del);
	}
	RA_args[l] = NULL;
	return (RA_args);
}
