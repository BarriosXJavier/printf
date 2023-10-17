#include "main.h"

/**
 * _putchar - write the character c to the stdout
 * @c: The character to b printed
 *
 * Return 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
