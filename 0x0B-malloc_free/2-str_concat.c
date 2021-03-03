#include "holberton.h"
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: New string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, ct = 0, rs, nrs, nsize;
	char *nstr;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[ct] != '\0')
	{
		ct++;
	}
	nsize = i + ct;
	nstr = malloc(nsize * sizeof(char) + 1);

	if (nstr == NULL)
	{
		return (NULL);
	}
	for (rs = 0; rs < i; rs++)
	{
		nstr[rs] = s1[rs];
	}
	for (nrs = 0; nrs < ct; nrs++)
	{
		nstr[rs] = s2[nrs];
		rs++;
	}
		nstr[rs] = '\0';
	return (nstr);
}
