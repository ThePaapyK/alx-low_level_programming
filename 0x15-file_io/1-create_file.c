#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file  to be created
 * @text_context: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, nfd, mfd;
	char *buff;
	char *buffer;

	size_t length;

	if (!filename)
		return (-1);
	if (!text_content)
	{
		nfd = open(filename, O_CREAT | O_RDWR, 0600);
		if (nfd == -1)
			return (-1);
		return (1);
	}
	fd = open(filename, O_EXCL | O_CREAT | O_RDWR, 0600);

	buff = malloc(sizeof(text_content));
	buffer = _strcp(text_content, buff);
	length = sizeof(text_content);
	if (fd == -1)
	{
		mfd = open(filename, O_TRUNC | O_RDWR);
		if (mfd == -1)
			return (-1);
		return (1);
	}

	write(fd, buffer, length);
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