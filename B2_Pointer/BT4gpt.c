// Viết một hàm int calculate(int a, int b, int (*operation)(int, int)) 
// nhận vào hai số nguyên và một con trỏ hàm, sau đó gọi con trỏ hàm này
//  với hai số nguyên đã cho và trả về kết quả.

#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}
int cal(int a, int b, int (*opera)(int, int))
{
    return opera(a, b);
}
int main()
{
    printf("tong %d ", cal(1, 2, add));
    printf("\nhieu %d ", cal(5, 2, sub));
}