#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: The name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int az;
	int con_bytes;
	int perm_bytes;

	if (!filename)
		return (-1);

	az = open(filename, O_WRONLY | O_APPEND);

	if (az == -1)
		return (-1);

	if (text_content)
	{
		for (con_bytes = 0; text_content[con_bytes]; con_bytes++)
			;
		perm_bytes = write(az, text_content, con_bytes);

		if (perm_bytes == -1)
			return (-1);
	}
	close(az);

	return (1);
}
