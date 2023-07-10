#include "main.h"
/**
 * read_textfile- reads a text file prints itto the POSIX standard output
 * @filename: filename to read
 * @letters: letters no.tobe read
 * Return: actual no.of letters read hence print
 * 0 on fail or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *zee;
	ssize_t wee;
	ssize_t l;
	ssize_t k;

	wee = open(filename, O_RDONLY);
	if (wee == -1)
		return (0);
	zee = malloc(sizeof(char) * letters);
	k = read(wee, zee, letters);
	l = write(STDOUT_FILENO, zee, k);

	free(zee);
	close(wee);
	return (l);
}
