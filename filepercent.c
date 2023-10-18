#include "main.h"

int tarik_nbr(int nbr)
{
    if (nbr == 0)
        return 0;
    int n = 1 + tarik_nbr(nbr / 10);
    return (n);
}
