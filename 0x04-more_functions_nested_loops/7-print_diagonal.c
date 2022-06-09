#include <stdio.h>

int main(void)
{   
    char builder = '$';
    int size = 10;

    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
          _putchar("%c", builder);
        }
        _putchar('\n');
    }

    return 0;
}
