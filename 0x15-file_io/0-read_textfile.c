#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the
 * POSIX standard output.
 *
 * @filename: The fine to be read
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 * 0, if the file can not be opened or filename is NULL or
 * write fails or does not write the expected num of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int azq;
	ssize_t read_bytes, written;
	char *b_buff;

	if (!filename)
		return (0);

	azq = open(filename, O_RDONLY);

	if (azq == -1)
		return (0);

	b_buff = malloc(sizeof(char) * letters);
	if (b_buff  == NULL)
		return (0);

	read_bytes = read(azq, b_buff, letters);
	written = write(STDOUT_FILENO, b_buff, read_bytes);

	close(azq);
	free(b_buff);

	return (written);
}
