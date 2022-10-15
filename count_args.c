#include "main.h"

int count_args(const char *n)
{
	int count = 0;
	int i;
	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] == '%')
		{
			if (n[i + 1] == 'd')
			count ++;
			else if (n[i + 1] == 'c')
			count ++;
			else if (n[i + 1] == 'i')
			count ++;
			else if (n[i + 1] == 'u')
			count ++;
			else if (n[i + 1] == 'x')
			count ++;
			else if (n[i + 1] == 'r')
			count ++;
			else if (n[i + 1] == 's')
			count ++;
		}
	}
	return (count);
}
