#include "main.h"
int _printf(const char *format, ...)
{
	int count = 0, pos = 1;
	char parameters[100];
	int i;
	int b = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if ((format[i] == '%') && check_next(format[i + 1]))
		{
			parameters[b] = format[i + 1];
			b++;
			i++;
		}
	}

	for (i = 0; format[i] != '\0'; i++)
	{
		if(format[i] == '%' && format[i + 1] == '6')
		{
			va_list list;
			va_start(list, format);

			if (format[i + 2] == 'd' || format[i + 2] == 'i')

				count += printdecimal2(va_arg(list, int));
			if (format[i + 2] == 'u')
				count += printunsignint2(va_arg(list, unsigned int));
			if (format[i + 2] == 'o')
				count += printocta(va_arg(list, unsigned int));
			i += 2;
			count--;
		}

		else if (format[i] == '%' && check_format(format[i + 1]))
		{
			va_list list;
			int c;
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
					i++;
					count--;
				}

				else
				{

					if (parameters[c] == ('d' || 'i' || 'c'))
						va_arg(list, int);
					else if (parameters[c] == ('u' || 'o' || 'b' || 'x' || 'X'))
						va_arg(list,unsigned int);
					else
						va_arg(list, char*);
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
