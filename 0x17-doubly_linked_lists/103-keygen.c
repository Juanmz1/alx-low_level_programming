#include <stdio.h>
#include <stdlib.h>

/**
* main - generate a valid key for given username
* @argc: argument count
* @argv: argument vector
* )
* Return: 0 or 1 on error
*/
int main(int argc, char *argv[])
{
	int i, j, len, add;
	char *ch = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char *new = malloc(sizeof(char) * 7);

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	for (len = 0; argv[1][len] != '\0'; len++)
		;
	new[0] = ch[(len ^ 59) & 63];
	for (i = 0, add = 0; i < len; i++)
		add += argv[1][i];
	new[1] = ch[(add ^ 79) & 63];
	for (i = 0, j = 1; i < len; i++)
		j *= argv[1][i];
	new[2] = ch[(j ^ 85) & 63];
	for (j = argv[1][0], i = 0; i < len; i++)
		if (j <= argv[1][i])
			j = argv[1][i];
	srand(j ^ 14);
	new[3] = ch[rand() & 63];
	for (j = 0, i = 0; i < len; i++)
		j += argv[1][i] * argv[1][i];
	new[4] = ch[(j ^ 239) & 63];
	for (j = 0, i = 0; i < argv[1][0]; i++)
		j = rand();
	new[5] = ch[(j ^ 229) & 63];
	printf("%s", new);
	return (0);
}
