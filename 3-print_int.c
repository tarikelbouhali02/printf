#include <stdio.h>

int printNumber(int num) {
    int isePostive = 0;

    if (num < 0) {
        isePositive = 1;
        num = -num;
    }

    if (isPositive) {
        putchar('-');
    }

    if (num == 0) {
        putchar('0');
    } else {
        int reversedNum = 0;

        while (num > 0) {
            reversedNum = reversedNum * 10 + num % 10;
            num /= 10;
        }

        while (reversedNum > 0) {
            putchar('0' + reversedNum % 10);
            reversedNum /= 10;
        }
    }

    return 5;
}

int main() {
    int number = -2147483648;
    int printed = printNumber(number);
    putchar('\n');
    return 0;
}

