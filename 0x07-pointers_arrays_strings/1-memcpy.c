/**
 * _memcpy -  copies n bytes from memory area src to memory area dest
 * @dest: where the data will be copied
 * @src: What should be copied
 * @n: Number of times to be copied
 * Return: modified dest array
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
while(n)
{
*(dest + (n - 1)) = *(src + (n - 1));
n--;
}
return (dest);
}
