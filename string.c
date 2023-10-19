#include "main.h"



int print_str(char *string)
{
    int v = 0;

    if (!string)
    {
        print_str("(null)");
        return;
    }
    else
    {
        do 
        {
            
             _putch(*string);
            string++;
            v++;
        }
        while (*string)
        {
             print_str("(null)");
        }
    }
    return (v);
}
