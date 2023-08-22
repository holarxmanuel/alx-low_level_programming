#include "main.h"

/**
 * _write - writes a character to stdout
 * @c: The character
 * @fd: Arg
 * @buf: arg
 * @count: arg
 *
 * Return: On success 1. On error, -1 , and errno is set y.
 */
ssize_t _write(int fd, const void *buf, size_t count)
{
	return (write(fd, buf, count));
}
