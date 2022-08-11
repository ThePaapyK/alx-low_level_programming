#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of file.
 * @text_content: the NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	char *buff, *buffer;
	size_t length;
	ssize_t wr;
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND | O_RDWR);

	if (!text_content)
		return (1);

	buff = malloc(sizeof(text_content));
	buffer = _strcp(text_content, buff);

	for (length = 0; text_content[length] != '\0'; length++)
		;

	wr = write(fd, buffer, length);

	if (wr == -1)
		return (-1);

	close(fd);
	free(buff);

	return (1);
}


/**
 * _strcp - copies a string into a buffer
 * @str: string to be copied
 * @dest: destination
 * Return: pointer to dest
 */
char *_strcp(char *str, char *dest)
{
	int i, j, k;

	for (i = 0; str[i] != '\0'; i++)
		;

	for (k = 0, j = 0; k < i; k++, j++)
	{
		dest[j] = str[k];
	}
	dest[j] = str[k];

	return (dest);
}
