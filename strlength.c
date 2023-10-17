#include "main.h"
/**
 * _strlen - Returns a string length
 * @str: string pointer
 * Return: i
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] !=0; i++)
	
	return (i);
}
 /**
  * _strlen - Same function but used for constant char pointer str
  * @str: char pointer
  * Return: i
  */
int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		return (i);
}
