
#include <stdio.h>

/**
 * main - Entry point, prints the opcodes of the function
 * Return: Nothing
 */
int main(void)
{
unsigned char *ptr = (unsigned char *)main;
int i;

for (i = 0; i < 16; i++)
{
printf("%02x\t", ptr[i]);
if (ptr[i] == 0xc3)
{
printf("ret\n");
break;
}
printf("nop\n");
}
return (0);
}
