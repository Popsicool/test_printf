#include "main.h"
int printunsignint(unsigned int n)
{
	int count = 0;

        if (n < 0)
	{
		n = -n;
	}
        if (n/10)

        count += printunsignint(n/10);

        _putchar(n%10 + '0');
        count ++;
        return (count);
}
