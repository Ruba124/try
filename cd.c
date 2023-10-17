#include "shell.h"
/**
 * RA_cd - function
 * @com:para
 */
void RA_cd(char **com)
{
	if (!com[1] || RA_strcmp(com[1], "-") == 0)
	{
		chdir(RA_getenv("HOME"));
	}
	else
	{
		if ((chdir(com[1]) != 0))
		{
			free(com[1]);
			perror("cd");
		}
	}
}

