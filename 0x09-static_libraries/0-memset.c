/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * @s: The constant.
 * @n: Number of bytes.
 * @b: The byte.
 * Return: the constant after the editing
 */
char *_memset(char *s, char b, unsigned int n)
{
while (n)
{
s[n - 1] = b;
n--;
}
return (s);
}
