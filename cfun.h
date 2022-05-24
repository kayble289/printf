#ifndef CFUN_H
#define CFUN_H

#include <stdlib.h>

/**
 * * _strlen - returns the length of the string
 * * @str: string to check
 * *
 * * Return: int
 **/

size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * * _strcpy - copies a string pointed by @src
 * * include the terminating null byte(\0),
 * *  to the buffer pointed to by dest
 * * @dest: a buffer to copy to
 * * @src: source to copy from
 * * Return: A pointer
 **/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');


	return (dest);
}

#endif
