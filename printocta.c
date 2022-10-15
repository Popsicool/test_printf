#include "main.h"
#include <stdio.h>


int printocta(unsigned int a)
{
int octalNum = 0;
int i = 1;
int remainder;

while(a != 0) 
{
	remainder = a%8;
	a = a/8;
	octalNum = octalNum + (remainder*i);
	i = i*10;
}



return (0);
}
