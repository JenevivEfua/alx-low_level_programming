#include "main.h"

/**
* string_toupper - changes all lowwer case letters to uppercase
* @str: string to b changed
*
* Return: address to the string
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'Z'
			str[i] -= 32;
		i++;
	}
	return (str);
}
