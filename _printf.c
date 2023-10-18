#include "main.h"

int _tarik(const char *format, ...)
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
            format++;
            if (*format == 'c') // print character
            {
                char cha = va_arg(args, int);
                _mounir(cha);
                co++;
                format++;
            }
            else if (*format == 's') // print argument string
            {
                char *string =  va_arg(args, char*);
                int a = tarik_str(string);
                cnt += a;
                format++;
            }
            else if (*format == '%') //for %% print %
            {
                _mounir('%');
                cnt++;
                format++;
            }
            else if (*format == 'd' || *format == 'i')
            {
                int nombre = va_arg(args, int);
                int ncnt;
                if (nombre < 0)
                    cnt++;
                ncnt = tarik_nbd(nombre);
                format++;
                cnt =cnt + ncnt;
                tarik_nombre(nombre);
            }
           
            
        }
        else
        {
            _mounir(*format);
            cnt++;
            format++;
        }
    }
    return cnt;
}
