#include "main.h"
/**
 *  _strlen - return the lengh of a string
 *  @s: string
 *  Return: the length of the string
 */
int _strlen(char *s)
{
	int i;
	int count = 0;
	
	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
