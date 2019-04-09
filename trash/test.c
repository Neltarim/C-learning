#include <unistd.h>

int    my_putchar(char c)
{
    write(1, &c, 1);
}

void    my_putstr(char *str)
{
    int index = 0;
    while(str[index])
    {
        my_putchar(str[index]);
        index++;
    }
}

int     main()
{
    my_putstr("hello world");
    return(0);
}