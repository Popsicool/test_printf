#include "main.h"
int printString(char *word)
{
	int count = 0;
	int i;
	for (i = 0; word[i] != '\0'; i++)
	{
		if(((0 < word[i]) && (word[i] < 32)) || (word[i] >= 127))
		{
			_putchar(92);
			_putchar('x');
			_putchar(word[i]);
		}
		else
		{
			_putchar(word[i]);
			count++;
	
		}
	}
		return(count);
}
