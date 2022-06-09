#include <stdio.h>

int main(void)
{   
    char builder = '\$';
    int size = 10;

    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(j == i)
                printf("%c", builder);
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
