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

// 0 1 2 3 4 5 6 7 8 9
// 0 1 2 3 4
while (list[i] != '\0')
{
for(j = 0; str[j] != '\0'; j++)
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
