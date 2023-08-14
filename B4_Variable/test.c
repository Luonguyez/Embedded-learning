#include <stdio.h>

int  i =50;
static void count()
{
    printf("%d\n", i);
    i++;
}

void temp()
{
    count();
}