#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint( const char *b)
{
 unsigned int s = 1;
 unsigned int i=0;
 int n;
 unsigned int len;

 len = strlen(b);

  for (n = len-1; n >= 0; n--)
 {
  if (b[n] != '0' && b[n] != '1')
      return (0);
    if (b[n] == '1')
    {
     i += s;
     }
    s *= 2;
}
 return (i);
}
