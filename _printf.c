#include "main.h"

int _printf(const char *format, ...)
{
    int cnt = 0;

    va_list args;
    va_start(args, format);
    if (!format || !format[0])
        return (-1);
    while (*format)
    {
        if (*format == '%')
        {
            format = format + 1;
            if (*format == 'c') // print character
            {
                char cha = va_arg(args, int);
                _putch(cha);
                cnt = cnt + 1;
                format = format + 1;
            }
            else if (*format == 's') // print argument string
            {
                char *string =  va_arg(args, char*);
                int a = print_str(string);
                cnt += a;
                format = format + 1;
            }
            else if (*format == '%') //for %% print %
            {
                _putch('%');
                cnt = cnt + 1;
                format = format + 1;
            }
            else if (*format == 'd' || *format == 'i')
            {
                int nombre = va_arg(args, int);
                int nco;
                if (nombre < 0)
                    cnt = cnt + 1;
                ncnt = long_nbr(nombre);
                forma = format + 1;
                cnt =cnt + ncnt;
                print_nombre(nombre);
            }
            else // %string or other character
            {
                if (*format)
                {
                    format = format - 1;
                    _putch(*format);
                    format = format + 1;
                }
                cnt = cnt + 1;
            }
        }
        else
        {
            _putch(*format);
            cnt = cnt + 1;
            format = format + 1;
        }
    }
    return cnt;
}
