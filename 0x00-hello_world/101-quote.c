#include<unistd.h>

/**
 * main - Entry point
 *
 * description: print using write function
 * write(int fd, void* buf, ssize cnt)
 *
 * Return: 1 (error)
*/

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}
