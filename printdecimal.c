#include "main.h"

int printdecimal(int n)
{
	int count = 0;

	if (n < 0) 
	{
		_putchar('-');
		count ++;
		n = -n;
	}
	if (n/10)
	count += printdecimal(n/10);

	_putchar(n%10 + '0');
	count ++;
	return (count);
}

int printdecimal2(int n)
{
int count = 0;
int c = 0;
int t = n;
int space = 0;
int i;
if (n == 0)
	c = 1;
while (n)
{
	n = n/10;
	c++;
}
if (c < 6)
{
	space = 6 - c;
	for (i = 0; i < space; i++)
	{
	 	_printf(" ");
		count++;
	}
}
count += printdecimal(t);
return (count);
}
