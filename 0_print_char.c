#include <stdio.h>

void _putch(char character) {
    putchar(character);
}

int main() {
    _putch('H');
    _putch('e');
    _putch('l');
    _putch('l');
    _putch('o');
    return 0;
}
