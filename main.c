#include "main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
/*void *addr;*/
int len;
int len2;
unsigned int ui;
len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");
ui = (unsigned int)INT_MAX + 1024;
/*addr = (void *)0x7ffe637541f0;*/
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
_printf("Negative:[%d]\n", -762534);
printf("Negative:[%d]\n", -762534);
_printf("Unsigned:[%u]\n", ui);
printf("Unsigned:[%u]\n", ui);
_printf("Unsigned octal:[%o]\n", ui);
printf("Unsigned octal:[%o]\n", ui);
_printf("test decimal with %b\n", 98);
_printf("test hexadecimal with %x\n",578554);
_printf("test hexadecimal again with %X\n", 23564);
_printf("%S\n", "Best\nSchool");
_printf("test reverse with %r\n", "Samson");
_printf("test Rotate by 13 with %R\n", "rotate by 13 places");
return (0);
}
