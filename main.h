#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>


int printstr(char * word);
char *get_parameters(const char *format);
int _putchar(char c);
int _printf(const char *format, ...);
int printdecimal(int);
int count_args(const char *n);
int check_format(char n);
int handle_function(int a, int b, char c);
int printunsignint(unsigned int);
int printocta(unsigned int);
int printbinary(unsigned int);
int printhexadecimal(unsigned int);
int printString(char *format);
int printreverse(char *a);
int printrot(char *a);
struct node{
	char data;
	struct node *next;
};

#endif
