#include <unistd.h>
#include "main.h"

/**
 * _putchar : write the character  c to stdout
 * 0c: the character to print
 *
 * Return : on Success 1
 *          on Error -1 is returned
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
