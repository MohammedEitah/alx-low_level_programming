#include <stdio.h>
/**
 * main - entry point
 *
 * main is the entry point to any c program
 *
 * Description : main (void) means the function takes no argument
 * and returns an integre
 *
 *Return: 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
