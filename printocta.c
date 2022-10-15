#include "main.h"
#include <stdio.h>


int printocta(unsigned int a)
{

printf("the number is %u\n", a);

int octalNum = 0;
int i = 1;
int remainder;
if (a < 0)
	a = -a;
while(a != 0) 
{
	remainder = a%8;
	a = a/8;
	octalNum = octalNum + (remainder*i);
	i = i*10;
}

printf("the octa value is %d\n", octalNum);



return (0);
}
