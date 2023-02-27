#include <main.h>

/**
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 * Return: the pointer to dest
 */
char *strcpy(char *dest, char *scr)
{
	int i;
	for(i = 0; scr[i] != '\0';i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\n';
	return (dest);
}
