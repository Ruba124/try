#include "shell.h"
/**
 * RA_strcmp - our custom strcmp function
 * @s1:para
 * @s2:para2
 * Return:0-1
 */
int RA_strcmp(char *s1, char *s2)
{
	int let;
	int n = 0;
	int j;

	for (n = 0; s1[n] == s2[n] && s1[n] != '\0' && s2[n] != '\0'; n++)
		;
	if (s1[n] > s2[n])
	{
		let = s1[n] - s2[n];
		return (let);
	}
	else
	{
		j = s2[n] - s1[n];
		return (-j);
	}
	return (0);
}
/**
 * RA_strcat - function
 * @s1:para
 * @s2:para2
 * Return:s2
 */
char *RA_strcat(char *s1, char *s2)
{
	int l = 0;
	int m, n;

	for (m = 0; s1[l] != '\0'; l++)
	{
		m++;
	}
	for (n = 0; s2[n] != '\0'; n++)
	{
		s1[m] = s2[n];
		m++;
	}
	s1[m] = '\0';
	return (s1);
}
/**
 * RA_strcpy - function
 * @s1:para
 * @s2:para
 * Return:value
 */
char *RA_strcpy(char *s1, char *s2)
{
	int l = -1;

	do {
		l++;
		s1[l] = s2[l];
	} while (s2[l] != '\0');

	return (s2);
}
/**
 * RA_strcspn - function
 * @s1:first
 * @s2:second
 * Return:num
 */
int RA_strcspn(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			if (s1[i] == s2[j])
			{
				return (i);
			}
		}
	}
	return (i);
}
