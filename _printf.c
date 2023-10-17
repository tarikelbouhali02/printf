#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    int char_count = 0;

    while (*format) {
        if (*format != '%') {
            putchar(*format);
            char_count++;
        } else {
            format++; // Move past '%'
            if (*format == '\0') break; // End of format string

            switch (*format) {
                case 'c': {
                    int c = va_arg(args, int);
                    putchar(c);
                    char_count++;
                    break;
                }
                case 's': {
                    char *str = va_arg(args, char*);
                    if (str != NULL) {
                        while (*str) {
                            putchar(*str);
                            str++;
                            char_count++;
                        }
                    } else {
                        fputs("(null)", stdout);
                        char_count += 6; // Length of "(null)"
                    }
                    break;
                }
                case '%':
                    putchar('%');
                    char_count++;
                    break;
                default:
                    putchar('%'); // Print the '%' character itself
                    putchar(*format); // Print the unknown character
                    char_count += 2;
                    break;
            }
        }
        format++;
    }

    va_end(args);
    return char_count;
}

int main() {
    int count = _printf("Hello, %c World! This is a %s example: %%\n", 'C', "printf");
    printf("\nTotal characters printed: %d\n", count);

    return 0;
}
