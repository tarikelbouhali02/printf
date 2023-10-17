#include<stdio.h>

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	va_start(args, format);
	if (!format || !format[0])
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if(*format == 'c')// print some character
			{
				char cha = va_args(args, int);
				_putch(cha);
				count++;
				format++;
			}
			else if (*format == 's') //print spme argument string
			{
				char *string = va_arg(args, char*);
				int a = printf_str(string);
				count += a;
				format++;
			}
			else if (*format == '%') //for %% print
			{
				_putch('%');
				count++;
				format++;
			}
			else //%string or other character
			{
				if (*format)
				{
					format--;
					_putch(*format);
					format++;
				}
				count++;
			}
		}
		else {
			_putch(*format);
			count++;
			format++;
		}
	}
	return count;
}
