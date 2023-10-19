#include "main.h"
/**
 * cap_string - a function to cap every word.
 * @s: the string.
 * Return: A string with the same words, captilized.
 */

char *cap_string(char *str) {
int i;
int capitalize = 1;   
for (i = 0; str[i] != '\0'; i++) {
if (capitalize && isalpha(str[i]))
{
str[i] = toupper(str[i]);
capitalize = 0;
} else if (isspace(str[i]) || ispunct(str[i]))
{
capitalize = 1;
}
}
return (str);
;wa
}
