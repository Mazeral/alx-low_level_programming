/**
 * strncpy - similar to strcpy, but with an n
 * @dest: the array to be changed
 * @the change
 * Return: dest after change
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (dest[i] != '\0')
{
dest[i] = src[i];
}
else
{
break;
}
}
}
