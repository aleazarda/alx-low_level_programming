#include "main.h"

/**
 * main - check the code
  *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will also be changed
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}

j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';

return (dest);
}
