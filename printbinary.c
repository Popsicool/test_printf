#include "main.h"

int dec(long long n);

int printbinary(unsigned int n)
{
	int count = 0;
	long long bin = 0;
	int rem, i = 1;

	while (n!=0) 
	{
		rem = n % 2;
		n /= 2;
		bin += rem * i;
		i *= 10;
	}


	count = dec(bin);
	return (count);
}

int dec(long long n)
{
	int count = 0;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n/10)
		count += dec((n/10));
	_putchar(n%10 + '0');
	count ++;
	return (count);
}
