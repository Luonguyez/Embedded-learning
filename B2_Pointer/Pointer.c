#include <stdio.h>

int tong(int a, int b)
{
    // printf("Tong la %d ", a+b);

    return a+ b;
}

int tinhtoan(int a, int b, int(*p)(int, int))
{
    printf("Tinh toan \n");
    // p(5,6);
}

int main()
{
    // int a =10;
    // int *ptr = &a;
    // printf("Dia chi a %p\n", &a);
    // printf("Gia tri cua ptr %p", ptr);

    // int (*p)(int, int);
    // p = &tong;
    // p(2,7);
    
    // tinhtoan(5,6, &tong);
    
    printf("Tong tinh toan %d ", tinhtoan(1,2,&tong));

}
