#include<stdio.h>

int *ptr()
{
    static int  test = 20;
    return &test;
}
int main()
{
    int *p = ptr();
    printf("\n%d \n", *p);
}
    