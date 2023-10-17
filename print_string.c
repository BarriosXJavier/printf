#include "main.h"

/**
 * print-string - prints a string
 * @val: Arguement
 * Return:String length
 *
 */
int print-string(va_list val)
{
	char *str;
	int i;
	int strlength;

	str = va_arg(val, char *);
	
	if (str == NULL)
	{
		str = "(null)";
		strlength = _strlen(str);

		for (i = 0; i < strlength; i++)
			_putchar(str[i]);
		return (strlength);
	}
	else
	{
		strlength = _strlength(str);
		for (i = 0; i < strlength; i++)
			_putchar(str[i]);
		return (strlength);
	
	}
}
