#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argv: argument vector
 * @argc: argument counter
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		(void)argc;
		i++;
	}
	return (0);
}

