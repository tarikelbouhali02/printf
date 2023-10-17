#include "main.h"



int print_str(char *string)
{
    int y = 0;

    if (!string)
    {
        print_str("(null)");
        return;
    }
   else if  (!string)
    {
	    print_str("null");
	    return;
    }
    else
    {
        while (*string)
        {
            _putch(*string);
            string++;
            y++;
        }
    }
    return (v);
}
