3-islower.c CODE


#include "main.h"


/**
 * main - check if char is lowercase
 *
 * Return: 1 if char is lowercase, otherwise 0.
 */


int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
