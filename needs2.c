#include "shell.h"
/**
 * RA_space - function
 */
int RA_space(char R)
{
	return (R == ' ' || R == '\t' || R == '\n' ||
			R == '\v' || R == '\f' || R == '\r');
}
/**
 * RA_strlen - counts the length
 * @s:para
 * Return:length
 */
int RA_strlen(char *s)
{
	int l;

	for (l = 0; *s != '\0'; s++)
	{	l++; }
	return (l);
}
/**
 * RA_strchr - function
 * @s:para
 * @s2:para2
 * Return:poimter
 */
char *RA_strchr(char *s, char s2)
{
	int pin;

	for (pin = 0; s[pin] != '\0'; pin++)
	{
		if (s[pin] == s2)
		{
			return (s + pin);
		}
	}
	return (NULL);
}
/**
 * RA_empty - checks if empty
 */
int RA_empty(const char *S)
{
	if (S == NULL)
	{	return (1); }
	while (*S)
	{
		if (!RA_space(*S))
		{	return (0); }
		S++;
	}
	return (1);
}
