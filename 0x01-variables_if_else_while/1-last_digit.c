#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int i;
	char str[] = "Last digit of";
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	i = n % 10;
	if (i > 5)
		printf ("%s  %d is %d and is greater than 5\n", str, n, i);   
	else if (i == 0)
		printf("%s %d is %d and is 0\n", str, n, i);
	else if (i < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, i);
	return (0);
}
