#include "shell.h"
/**
 * RA_print- function
 * @letter:the string to be printed
 * Return:This function doesnot return any value
 */
void RA_print(char *letter)
{
	write(1, letter, strlen(letter));
}
