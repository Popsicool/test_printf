#include "main.h"

int check_format(char n)
{
if (n == 'd')
	return (1);
if (n == 's')
	return (1);
if (n == 'c')
	return (1);
if (n == 'i')
	return (1);
if (n == 'u')
	return (1);
if (n == 'x')
	return (1);
if (n == 'r')
	return (1);
if (n == 'o')
	return (1);
if (n == 'p')
	return (1);
if (n == 'R')
	return (1);
if (n == 'b')
	return (1);
if (n == 'X')
	return (1);
if (n == 'S')
	return (1);
/*
if (n == 's')
	return (1);
if (n == 's')
	return (1);
if (n == 's')
	return (1);
*/
return (0);
}
