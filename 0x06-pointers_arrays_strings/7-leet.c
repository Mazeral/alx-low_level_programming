/**
 * leet - replaces some letters with some numbers
 * @str: the string
 * Return: the edited string
 */

char *leet(char *str)
{
char list[] = "aAeEoOtTlL";
char list2[] = "43071";
int i = 0;
int j = 0;
while (list[i] != '\0')
{
for (j = 0; str[j] != '\0'; j++)
{
if (list[i] == str[j])
{
str[j] = list2[i / 2];
}
}
i++;
}
return (str);
}
