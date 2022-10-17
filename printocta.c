#include "main.h"
#include <stdio.h>


int printocta(unsigned int a)
{
int count = 0;
int octalNum = 0;
int octalNum2 = 0;
int i = 1;
int b = 0;
int j = 1;
int remainder;

while(a != 0) 
{
	remainder = a%8;
	a = a/8;
	if(b > 8)
	{
		octalNum2 = octalNum2 + (remainder*j);
		j = j * 10;
	}
	else
	{
		octalNum = octalNum + (remainder*i);
		i = i*10;
		b++;
	}
}
if(octalNum2)
	count += _printf("%d",octalNum2);
count += _printf("%d",octalNum);

return (count);
}
