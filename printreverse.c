#include "main.h"
int printreverse(char *word)
{
	int i;
	int count = 0;
	for (i = 0; word[i] != '\0'; i++)
		;
	i--;
	for (i; i >= 0; i--)
	{
		_putchar(word[i]);
		count++;
	}
	return (count);
}
