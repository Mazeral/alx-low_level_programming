/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * @s: The constant.
 * @n: Number of bytes.
 * @b: The byte.
 * Return: the constant after the editing
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = n - 1;
while (i > 0)
{
s[i] = b;
i--;
}
return (s);
}
