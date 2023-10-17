#include "main.h"

int cntDigits(int number) {
    if (number == 0)
        return 0;

    int digitCnt = 1 + cnttDigits(number / 10);

    return digitCnt;
}
