//Viết một hàm int add(int a, int b) thực hiện
//phép cộng và trả về kết quả. Sử dụng con trỏ hàm để gọi hàm này từ hàm main.
#include <stdio.h>
int add(int a, int b)
{
    return a+b;
}

int main()
{
    int (*ptr)(int, int) = &add;
    
    printf("==================");
    printf("Tinh %d ", ptr(1,6));
}