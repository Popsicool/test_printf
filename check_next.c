#include "main.h"
int check_next(char c)
{
	int i;

	char array[] = "discobuxRrXS";
	for (i = 0; array[i] != '\0'; i++)
	{
		if (array[i] == c)
			return(1);
	}
	return (0);
}
