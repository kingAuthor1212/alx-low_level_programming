#include <stdlib.h>
#include <time.h>
/* more headers  goes there */ 
#include <stdio.h>
/**
 * main - print if the number is postive, zero, negative 
 * Description: using the main function 
 * this program prints  is postive, zero, negative 
 * return: 0 
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{	
printf("%! is positive\n", n);
}
else if (n == 0)
{
printf("%! is zero\n", n);
}
else if (n < 0)
{
 printf("%! is negative\n", n);
}
return (0);
}

