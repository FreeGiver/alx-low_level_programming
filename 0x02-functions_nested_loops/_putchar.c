#include <main.h>
#include <unistd.h>

/**
 * main - entry point
 *
 * _putchar - writes a single character to the standard output stream (stdout)
 *
 * return 0 (success)
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
