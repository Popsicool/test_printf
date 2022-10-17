#include "main.h"
int printunsignint(unsigned int n)
{
int count = 0;


if (n/10)

count += printunsignint(n/10);

_putchar(n%10 + '0');
count ++;
return (count);
}
int printunsignint2(unsigned int n)
{
int count = 0;
int c = 0;
int t = n;
int space = 0;
int i;
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
count += printunsignint(t);
return (count);
}
