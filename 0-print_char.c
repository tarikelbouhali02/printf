#include "main.h"

int _putch(character ch)
	/*
	 * 0-printf_char.c this is name of the file 
	 * @s: first string.
	 * @accept: second string.
	 * Return: a pointer to the byte in s that matches one
	 * byte in accept, or NULL if no such byte i found.
	 */
{
	return (write(1, &ch, 1));
	return 1;
}
