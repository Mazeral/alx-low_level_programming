/**
 * _strchr -  a function that locates a character in a string.
 * @s: The string
 * @c: The character
 * Return: the first occurance of char c in the string s
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)	;
if (s[i] == c)
return (s + i);
else
return (NULL);
}
