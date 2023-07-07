#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binart number to an unsigned int
 * @b: pointer to a STRING OF 0 OR 1
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int otpt = 0;

	/* if null return NULL */
	if (b == NULL)
		return (0);
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		otpt <<= 1;
		if (b[i] == '1')
			otpt += 1;
	}
	return (otpt);

}
