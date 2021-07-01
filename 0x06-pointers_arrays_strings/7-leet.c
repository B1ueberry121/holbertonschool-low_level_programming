/**
 * leet - Converts a string to 1337
 * @c: string
 * Return: pointer to string
 */

char *leet(char *c)
{
	int idx = 0, x = 0;
	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	while (c[idx] != '\0')
	{
		while (let[x] != '\0')
		{
			if (c[idx] == let[x])
				c[idx] = num[x];
			x++;
		}
		idx++;
	}
	return (c);
}
