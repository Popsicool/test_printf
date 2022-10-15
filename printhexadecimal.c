#include "main.h"

int printhexadecimal(unsigned int a)
{
int count = 0;


long remainder;
int quotient;
int i, j = 0;
char hexadecimalnum[100];
quotient = a;

//Storing remainders until number is equal to zero
while (quotient != 0)
{
remainder = quotient % 16;
if (remainder < 10)
hexadecimalnum[j++] = 48 + remainder;
else
hexadecimalnum[j++] = 55 + remainder;
quotient = quotient / 16;
}
for (i = (j - 1); i >= 0; i--)
{
_printf("%c", hexadecimalnum[i]);
count++;
}
return (count);

}
