#include "monty.h"
/**
 * check_dig - check is string is only digit
 * @s: string to be searched
 * Return: 1 if only digit -1 if not
**/
int check_dig(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[0] == '-')
			i++;
		if (s[i] >= '0' && s[i] <= '9')
			i++;
		else
		return (-1);
	}
	return (1);
}
