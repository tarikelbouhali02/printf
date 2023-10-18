#include "main.h"



int tarik_str(char *string)
{
    int v = 0;

    if (!string)
    {
        tarik_str("(null)");
        return;
    }
    else
    {
        while (*string)
        {
            _mounir(*string);
            string++;
            v++;
        }
    }
    return (v);
}
