#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @str: string to be processed
 * Return: lenth of string
 */
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
