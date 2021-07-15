#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE	256

int main(int argc, const char * argv[])
{
	char buffer[BUFFER_SIZE];

	int stdin_fd = -1;

	/** Get the file descriptor for standard input so that
	 * we can read from it.
	 */
	stdin_fd = fileno(stdin);

	if (read(stdin_fd, buffer, 10) == -1)
	{
		return -1;
	}

	// Print whatever we read
	printf("READ: %s\n", buffer);

	return 0;
}