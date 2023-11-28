#include "main.h"
#include<string.h>


/**
 * create_file - a function that creates a file
 * @filename: The file name.
 * @text_content: The content of the file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int write_check;

	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 600);
	if (file_descriptor == -1)
		return (-1);

	if (text_content == NULL)
		return (-1);


	write_check = write(file_descriptor, text_content, strlen(text_content));
	if (write_check == -1)
		return (-1);
	close(file_descriptor);
	return (1);
}
