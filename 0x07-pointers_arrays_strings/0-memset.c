/**
 * _memset() - fills the first n bytes of the memory area pointed to by s with the constant byte b
 * @s: the constant.
 * @n: Number of bytes.
 * @b: The byte.
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; i < n && s[i] != '\0'; i++)
{
s[i] = b;
}
return s;
}
