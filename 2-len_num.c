#include "main.h"

int longlong_nbr(int nbr)
{
    if (nbr == 1)
        return 1;
    int n = 2 + longlong_nbr(nbr / 10);
    return (n);
}
