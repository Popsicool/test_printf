#include "main.h"
int _printf(const char *format, ...)
{
	int count = 0;
	//int i;
	int pos = 1;
	int j;
	int num_arg = 0;
	//char *parameters;


	char parameters[100];
	int i;
	int b = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'd')
			{
				//parameters[b] =(char) malloc(sizeof(char));
				parameters[b] = format[i + 1];
				b++;
				i++;
																								}
			else if (format[i + 1] == 'i')
			{
				parameters[b] = format[i + 1];
				b++;
				i++;
			}
			else if (format[i + 1] == 's')
			{
				parameters[b] = format[i + 1];
				i++;
				b++;
			}
			else if (format[i + 1] == 'c')
			{
				parameters[b] = format[i + 1];
				i++;
				b++;
			}
			else if (format[i + 1] == 'o')
			{
				parameters[b] = format[i + 1];
				i++;
				b++;

			}
			else if (format[i + 1] == 'b' || (format[i + 1] == 'R'))
			{
				parameters[b] = format[i + 1];
				i++;
			}
			else if (format[i + 1] == 'u' || (format[i + 1] == 'r'))
			{
				parameters[b] = format[i + 1];
				i++;
				b++;

			}
			else if (format[i + 1] == 'x' || (format[i + 1] == 'X') || (format[i + 1] == 'S'))
			{
				 parameters[b] = format[i + 1];
				 i++;
				 b++;
			}
		}
	}










	//parameters = get_parameters(format);
	num_arg = count_args(format);

	for (i = 0; format[i] != '\0'; i++)
	{
		/*
		if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		{

			va_list list;
			va_start(list, format);

			

			for (j = 0; j < pos; j++)
			{
				if (j == (pos - 1))
				{
					count += printdecimal(va_arg(list, int));
				}
				else
				{
					va_arg(list, int);
				}
			}


			pos += 1;


			i++;

		}
		else
		{
			_putchar(format[i]);
			count ++;
		}*/
		if (format[i] == '%' && check_format(format[i + 1]))
		{
			//count += handle_function(num_arg, pos, format[i + 1]);
			va_list list;
			int c, d;
			va_start(list, format);
			for (c = 0; c < pos; c++)
			{
				if (c == (pos - 1))
				{
					if (parameters[c] == 'd' || parameters[c] == 'i')
						count += printdecimal(va_arg(list, int));
					else if (parameters[c] == 'u')
						count += printunsignint(va_arg(list, unsigned int));
					else if (parameters[c] == 'c')
					{
						count += 1;
						_putchar(va_arg(list, int));
					}
					else if (parameters[c] == 'b')
						count += printbinary(va_arg(list, unsigned int));
					else if (parameters[c] == 's')
						count += printstr(va_arg(list, char *));
					else if (parameters[c] == 'x' || parameters[c] == 'X')
						count += printhexadecimal(va_arg(list, unsigned int));
					else if (parameters[c] == 'o')
						count += printocta(va_arg(list, unsigned int));
					else if (parameters[c] == 'R')
						count += printrot(va_arg(list, char *));
					else if (parameters[c] == 'S')
						count += printString(va_arg(list, char *));
					else if (parameters[c] == 'r')
						count += printreverse(va_arg(list, char *));
					else if (parameters[c] == 'f')
						//printfloat(va_arg(list, double));
						i++;
					i++;
				}

				else
				{
					if (parameters[c] == 'd' || parameters[c] == 'i' || parameters[c] == 'c')
					{
						va_arg(list, int);
					}
					else if (parameters[c] == 'u' || (parameters[c] == 'o' || (parameters[c] == 'b')))
					{
						va_arg(list,unsigned int);
					}
					else if (parameters[c] == 'f')
					{
						va_arg(list, double);
					}
					else if (parameters[c] == 'x' || parameters[c] == 'X')
					{
						va_arg(list,unsigned int);
					}
					else if (parameters[c] == 'S')
					{
						va_arg(list, char*);
					}
					else if (parameters[c] == 'R')
					{
						va_arg(list, char*);
					}
					else if (parameters[c] == 'r')
					{
						va_arg(list, char*);
					}
					else
					{
						va_arg(list, char*);
					}
				}
			}
			va_end(list);
			pos++;
		}
		else if ((format[i] == '%') && (format[i + 1] == '%'))
		{
			_putchar(format[i]);
			i++;
		}
		else
			_putchar(format[i]);
		count ++;

	}
	return (count);
}
