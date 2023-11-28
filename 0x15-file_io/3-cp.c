#include "main.h"
#include<string.h>

/**
 * copy - a function that copies the contents from one file and paste it in another
 * @src: The source of the material to be copied.
 * @dest: The place where the material will be pasted
 * Return: 1 if sucess, 0 if failure
 */

ssize_t copy(int src, int dest)
{
	/* In this situation, it's better to use FILE *f rather int file_descriptor,
	 * Since we can use funcitons like fscanf to save the text. */
}

int main(int argc, char *argv[])
{
	int file_descriptor_src = open(argv[1], O_RDONLY);
	int file_descriptor_dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC);
	char *content;
	int write_checker;
	char buffer[4096];
	size_t file_size = 0;
	size_t bytes_read;

	if (file_descriptor_src == -1)
	{
		pritnf("Error: Can't read from file %s\n", src);
		exit(98);
	}
	if (file_descriptor_dest == -1)
	{
		printf("Error: Can't write to file %s\n", dest);
		exit(99);
	}
	/* Reading the src file and putting all
	 * it's content in the content char pointer. */
	while (bytes_read = read(file_descriptor_src, buffer, sizeof(buffer)) > 0)
	{
		file_size += bytes_read;
	}

	/* Malloc the contents. */
	content = malloc(file_size);

	/* Make the content have the actual contents of the src file. */
	content = read(file_descriptor_src, content, file_size);

	/* Writing the content in the dest file. */
	write_checker = write(file_descriptor_dest, content, file_size);
	if (write_checker == -1)
	{
		printf("Error: Can't write to file %s\n", argv[2]);
	}

	return (0);
}
