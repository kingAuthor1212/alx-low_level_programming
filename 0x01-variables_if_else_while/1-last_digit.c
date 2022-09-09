#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
int i;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
i = n % 10;
if(i > 5)
{
   printf ( "Last digit of %d is %d and is greater than 5\n", n, i );   
}
else if()
{
	printf( "")
}
return (0);
}
