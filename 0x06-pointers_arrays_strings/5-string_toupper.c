/**
 * string_toupper - Change all lower case letter to upper.
 * @s: The string.
 * Return: The string with upper cased letters.
 */
char *string_toupper(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] >= 97 && s[i] <= 122)
{
s[i] -= 32;
}
i++;
}
return (s);
}
