#include "main.h"

int printdecimal(int n)
{
	int count = 0;

	if (n < 0) 
	{
		_putchar('-');
		n = -n;
	}
	if (n/10)
	count += printdecimal(n/10);

	_putchar(n%10 + '0');
	count ++;
	return (count);
}
