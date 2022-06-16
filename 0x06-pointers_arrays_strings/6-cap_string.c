#include "main.h"
/**
 * cap_string - function capitalizes everey word of a string
 * @s: string
 * Return: return string
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char unique[13] = {9, 10, ' ', '!', '"', ',', '.',
		'?', ':', ')', '(', '}', '{', '-'};

	while (*(s + i))
	{
		j = 0;
		while (j < 13)
		{
			if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
				s[i] -= ' ';
			if (s[i - 1] == unique[j])
			{
				if ((*(s + i) >= 'a') &&  (*(s + i) <= 'z'))
					*(s + i) -= ' ';
			}
			j++;
		}
		i++;
	}
	return (s);
}
