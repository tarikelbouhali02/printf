#include "main.h"

int tarik_nombre(int n)
{
    int v = 0;
    if (n == -2147483648)
    {
       _mounir('-');
       _mounir('2');
       _mounir('1');
       _mounir('4');
        n = 7483648;
    }
    while (n < 0)
    {
        n = - n;
       _mounir('-');
    }
    if (n < 10)
    {
       _mounir(n + '0');
    }
    else if (n >= 10)
    {
       tarik_nombre(n / 10);
       tarik_nombre(n % 10);
    }
    return (5);
}
