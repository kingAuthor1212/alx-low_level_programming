#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
int n;
int i;
char str[] = "Last digitof";
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
i = n % 10;
if(i > 5)
{
   printf ( "%s  %d is %d and is greater than 5\n", str, n, i);   
 }
else if(i == 0)
{
	printf( "%s %d is %d and is 0\n", str, n, i
}
else if (i < 6)
{
printf("%s %d is %d and is less than 6 and not 0\n", str, n, i)
}
return (0);
}
