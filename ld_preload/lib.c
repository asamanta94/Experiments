#include <stdio.h>
#include <string.h>

ssize_t read(int fd, void * buf, size_t count)
{
	strcpy((char *) buf, "Hello World");
	return 10;
}