#include<unistd.h>

/**
 * main - Entry point
 *
 * description: print using write function    write(int fd, void* buf, ssize cnt) 
 *  The first parameter (fd) is the file descriptor where you want to write the file description. The data that has to be written in the second parameter. At last, the third parameter is the total bytes that has to be written
 *   
 * Return: 1
*/

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1,quo,59);	
	return (1);
}
