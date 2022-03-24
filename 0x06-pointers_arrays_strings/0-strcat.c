#include "main.h"
/**
 * _strcat - appends src to the dest string
 * @dest : string to be appended by src
 * @src : stirng to append to dest
 * return : address of dest
 */
char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}
	while (count2 >= 0)
	{
		*(dest + count) = *(src + count2);
		if(*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}

