#include <stdio.h>
#include "test.c" 

#define Sum(a, b) a +b 
void display()
{
    printf("Day la display\n");

}

void main()
{
    display();
    printf("Tong 7 9 la %d\n ", Sum(7,9));
    test();
    printf("tONG 2 3 la %d\n ", Sum(2,3));
}