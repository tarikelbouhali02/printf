#include "main.h"

int _putch(char ch)
/*
 * _putch - Custom character output function.
 * @ch: The character to be written to standard output.
 *
 * Description:
 * This function writes the specified character 'ch' to the standard output (file descriptor 1).
 *
 * Return:
 * Return value: 1 if the character was successfully written, or -1 on error.
 */
{
    return write(1, &ch, 1);
}
