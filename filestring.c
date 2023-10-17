#include "main.h"

int printString(char *str) {
    int cnt = 0;
    
    if (!str) {
        printString("(null)");
        return;
    } else {
        while (*str) {
            putCharacter(*str);
            str++;
            cnt++;
        }
    }
    
    return cnt;
}

void putCharacter(char c) {
    // Implement the logic for printing a character here.
}
