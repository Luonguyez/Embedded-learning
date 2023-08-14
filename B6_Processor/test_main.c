#include <stdio.h>

#define  Size  20

#if Size > 20
int display()
{
    printf(">20");
} 

#elif Size == 20
int display()
{
    printf("=20");
} 

#else
int display()
{
    printf("<20");
} 

#endif

int main()
{
    display();
}