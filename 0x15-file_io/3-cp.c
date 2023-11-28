#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - entry point
 * @argc: The count of the arguments
 * @argv: The vector containing every argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_descriptor_src = open(argv[1], O_RDONLY);
	int file_descriptor_dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC);
	char *content;
	int write_checker;
	char buffer[4096];
	size_t file_size = 0;
	ssize_t bytes_read;

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	if (file_descriptor_src == -1)
	{
		printf("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_descriptor_dest == -1)
	{
		printf("Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(file_descriptor_src, buffer, sizeof(buffer))) > 0)
	{
		file_size += bytes_read;
	}
	content = malloc(file_size);
	lseek(file_descriptor_src, 0, SEEK_SET);
	if (read(file_descriptor_src, content, file_size) == -1)
	{
		printf("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	write_checker = write(file_descriptor_dest, content, file_size);
	if (write_checker == -1)
	{
		printf("Error: Can't write to file %s\n", argv[2]);
	}
	close(file_descriptor_src);
	close(file_descriptor_dest);
	return (0);
}
