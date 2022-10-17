#include "main.h"
/**
* printbinary - prints binary digits
*/
int dec(long n);

int printbinary(unsigned int n)
{
	int count = 0;
	/*long bin = 0;*/
	int arr[100];
	int rem;
	int i = 0;

	while (n!=0) 
	{
		rem = n % 2;
		n /= 2;
		arr[i] = rem;
		i++;
		/*bin += rem * i;
		i *= 10;*/

	}


	count = i;
	i--;
	while (i >= 0)
	{
		_putchar((arr[i] + '0'));
		i--;
	}

	return (count);
}

int dec(long n)
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
	count++;
	return (count);
}
