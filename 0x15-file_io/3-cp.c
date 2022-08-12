#include "main.h"

/**
 * copyf - copies the content of a file to another file.
 * @file_from: file to be copied
 * @file_to: destination file
 *
 * Return: 1 on success, -1 on failure
 */

int copyf(const char *file_from, const char *file_to)
{
	int fd, sd;
	char buff[1024];
	ssize_t wr, rd, cf, cs;


	if (!file_from)
		return (98);

	fd = open(file_from, O_RDONLY);
	sd = open(file_to, O_CREAT | O_EXCL | O_WRONLY, 0664);

	if (sd == -1)
	{
		sd = open(file_to, O_TRUNC | O_WRONLY);
		if (sd == -1)
			return (99);
	}

	rd = 1024;
	while (rd == 1024)
	{
		rd = read(fd, buff, 1024);

		if (rd == -1)
			return (98);
		wr = write(sd, buff, rd);
		if (wr == -1)
			return (99);
	}

	cf = close(fd);
	cs = close(sd);

	if (cf == -1)
		return (fd);
	if (cs == -1)
		return (sd);

	return (1);
}

/**
 * main - copies the content of a file to another file.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int res;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	res = copyf(argv[1], argv[2]);

	if (res == 98)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	else if (res == 99)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	else if (res < 97)
	{
		dprintf(2, "Error: Can't close fd %d\n", res);
		exit(100);
	}
	else
	{
		return (0);
	}
}
