#include "shell.h"
/**
 * main - main function/
 */
int main(void)
{
	int RA_status = 0;
	char *order = NULL;
	char **args = NULL;
	int fret;

	while(2 > 1)
	{
		order = RA_get();
		if (order == NULL && isatty(STDIN_FILENO))
		{
			RA_print("\n");
			return(RA_status);
		}
		RA_hash(order);
		if (RA_empty(order))
		{
			free(order);
			RA_status = 0;
			continue;
		}
		args = RA_token(order);
		if (args == NULL)
		{
			free(args);
			continue;
		}
		fret = RA_func(args, order);
		if (fret == 2)
		{       continue; }
		else if (fret == -1)
		{       break; }
		RA_status = RA_proc(args, order);
		free(args);
		free(order);
	}
	return(RA_status);
}
		
		
		


