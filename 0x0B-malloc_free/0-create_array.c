#include "main.h"
/**
 * create_array - function that creates an array of chars
 *@size: size of the array
 *@c: character
 * Return: returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ar = 0;
	unsigned int x = 0;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		ar = (char *)malloc(size * sizeof(char));
		if (ar != 0)
		{
			while (x < size)
			{
				ar[x] = c;
				x++;
			}
		}
	}
	return (ar);
}
