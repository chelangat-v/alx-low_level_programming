#include "main.h"

/**
 * Author: Vicky Chelangat
 * File: 2-strlen.c
 * Description: returns the length of a string
 * @str: string to be processed
 * Return: length of string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
