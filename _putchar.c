#include <unistd.h>
/**
 * _putchar - Print just a character
 * @c: char parameter
 *
 * Return: Always &c (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
