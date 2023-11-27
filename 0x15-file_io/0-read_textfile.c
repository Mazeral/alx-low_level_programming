#include"main.h"

/**
 * read_textfile - read a text file and prints it to the POSIX std output
 * @filename: The name of ther file
 * @letters: The letters in the file.
 * Return: 0 or else
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *f;
	char chr;
	size_t counter = 0;

	if (filename == NULL)
		return (0);

	f = fopen(filename, "r");
	if (f == -1)
		return (0);
	while (fscanf(f, "%c", &chr) == 1 && counter < letters)
	{
		printf("%c", chr);
		counter++;
	}

	fclose(f);
	return (counter);
}
