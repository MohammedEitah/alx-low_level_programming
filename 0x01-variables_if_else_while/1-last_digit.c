#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * main is the entry point to any c program
 *
 * Description : get the last digit of an integre
 *
 *Return: 0 (Success)
 *betty style doc for function main goes there
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = ( n % 10 );
	if (i< 0) 
		i = -i;
	if (i > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, i);
	}
	else if (i == 0)
        {
                printf("Last digit of %d is %d and is 0\n", n, i);
        }
	else
        {
                printf("Last digit of %d is %d and is lsee than 6 and not 0\n", n, i);
        }
	return (0);
}
