#include "main.h"

/**
 * cap_string - capitalizes
 * @strg: pointer
 * Return: pointer to strg
 */
char *cap_string(char *strg)
{
	int i = 0;

	while (strg[i])
	{
		while (!(strg[i] >= 'a' && strg[i] < = 'z'))
			i++;
		if (strg[i - 1] == ' ' ||
		strg[i - 1] == '\t' ||
		strg[i - 1] == '\n' ||
		strg[i - 1] == ',' ||
		strg[i - 1] == ';' ||
		strg[i - 1] == '.' ||
		strg[i - 1] == '!' ||
		strg[i - 1] == '?' ||
		strg[i - 1] == '"' ||
		strg[i - 1] == '(' ||
		strg[i - 1] == ')' ||
		strg[i - 1] == '{' ||
		strg[i - 1] == '}' ||
		i == 0)
			strg[i] -= 32;
		i++;
	}

	return (strg);
}
