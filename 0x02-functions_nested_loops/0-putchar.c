#include<unistd.h>
#include "main.h"
/**
 * main - entry point
 * Description: prints a return file
 * Return: 1 (success)
	   -1 on error
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
