#include "main.h"
#include<string.h>

/**
 * append_text_to_file - appends a text to the end of the file
 * @filename: The name of the file.
 * @text_content: The content to be appeneded.
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor = open(filename, O_WRONLY | O_CREAT | O_APPEND);
	int write_check;

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
