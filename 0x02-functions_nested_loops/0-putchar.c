#include <stdio.h>
#include "main.h"
/* 
 * this is a program to print _putchar followed by a new line
 * the main function is the entry fn to any c program
 */
int main()
{
	char str[] = "_putchar";
	int ch;
	for (ch = 0: ch < 7; ch++)
		_putchar(str[ch]);
	_putchar("\n");
	return (0)
}
