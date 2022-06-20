#include "main.h"

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Always 0.
 */
void char *_memset(char *s, char b, unsigned int n)
{
       char buffer[98] = {0x00};

    simple_print_buffer(buffer, 98);
    _memset(buffer, 0x01, 95);
    printf(""%d ",buffer[98]\n");
    simple_print_buffer(buffer, 98);    
    return (0);
}
