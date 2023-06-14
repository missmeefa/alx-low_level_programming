#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filme:name of the file.
 * @text_content: content of the file.
 *
 * Return: 1 if file exist. -1 If the function fails or filename is NULL
 *         If the file does not exist the user lacks write permissions - -1.
 */
int append_text_to_file(const char *filme, char *text_content)
{
	int a, u, len = 0;

	if (filme == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	a = open(filme, O_WRONLY | O_APPEND);
	u = write(a, text_content, len);

	if (a == -1 || u == -1)
		return (-1);

	close(a);

	return (1);
}
