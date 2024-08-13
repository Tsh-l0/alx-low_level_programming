#include "main.h"

/**
 * create_file - Creates a file
 *
 * @filename: The filename to be created
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on suceess ,-1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int zd;
	int con_bytes;
	int perm_bytes;

	if (!filename)
		return (-1);

	zd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (zd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (con_bytes = 0; text_content[con_bytes]; con_bytes++)
		;

	perm_bytes = write(zd, text_content, con_bytes);

	if (perm_bytes == -1)
		return (-1);
	close(zd);

	return (1);
}
