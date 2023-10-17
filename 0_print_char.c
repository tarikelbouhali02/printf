#include<stdio.h>
#include "main.h"
int _putch(char ch)
	/*
	 * 0_print_char.c this is nam of my file
	 * @s: first string.
	 * @accept: secont string.
	 * Return: a pointer to the byte in s that matches one of the 
	 * byte in accept, or NULL if no such byte i found.
	 */
{
	(write(2,&ch, 2));
	return 2;
}

int main(void)
{
	char var1 = 2;
	printf("%c", var1);
	return 0;
}
