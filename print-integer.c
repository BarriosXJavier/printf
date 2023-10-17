#include "main.h"
/**
 * print_int - Prints an integer
 * @args: Arguements to be printed
 * Return: No. of characters printed
 */
int print_int(va_list args)
{
	int i = va_arg(args, int);
	int num, last = i % 10, digit, exp = 1;
	int j = 1;

	i = i / 10;
	num = i;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		i = -i;
		last = -last;
		i++;
	}

	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num /10;
		}
		num = i;
		while (exp > 0)
		{
			digit = num /exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			j++;
		}
		_putchar(last + '0');

		return (j);
	}
}

#include "main.h"

/**
 * print_int - Prints a decimal
 * @args: Arguements to be printed
 * Return: No. of characters printed
 */

int print_d(va_list args)
{
        int i = va_arg(args, int);
        int num, last = i % 10, digit, exp = 1;
        int j = 1;

        i = i / 10;
        num = i;

        if (last < 0)
        {
                _putchar('-');
                num = -num;
                i = -i;
                last = -last;
                i++;
        }
i
        if (num > 0)
        {
                while (num / 10 != 0)
                {
                        exp = exp * 10;
                        num = num /10;
                }
                num = i;
                while (exp > 0)
                {
                        digit = num /exp;
                        _putchar(digit + '0');
                        num = num - (digit * exp);
                        exp = exp / 10;
                        j++;
                }
                _putchar(last + '0');

                return (j);
        }
}

