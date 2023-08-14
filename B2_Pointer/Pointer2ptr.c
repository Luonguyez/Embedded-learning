#include <stdio.h>
void tong(int a, int b)
{
    printf("Tong %d \n", a + b);
}

int main()
{
    int i = 10;
    double d = 12.5;
    void *array[] ={&i, &d, &tong};
  
    printf("Double d: %f\n", *(double *)array[1]);
    printf("Int i: %d\n", *(int *)array[0]);
    ((void (*)(int, int))array[2])(2,3);
    (*void)(int, int)array[2](2,4);
    
}