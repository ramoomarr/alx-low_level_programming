#Include < unist.h >
#include "main.h"
/**
*_putchar - writes the character c to stdout
* Oc: The character to print
*Return: on success 1.
*on error, -I is returned, and errno is set appropri
tely.
*/
int —putchar(char c)
{
return (write(l, &c, 1));
}
