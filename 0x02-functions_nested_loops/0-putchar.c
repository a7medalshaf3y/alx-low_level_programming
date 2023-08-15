#include<stdio.h>
#include "main.h"
/**
 * main - entry point
 * Description: prints a return file
 * Return: 0 (success)
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
