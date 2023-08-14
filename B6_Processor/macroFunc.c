#include <stdio.h>

#define CreateFunc(name, text)  \
void name()                     \
{                               \
    printf("%s", (char *)text); \
}

#define MakeFuncCal(ten, tinh) \
void ten()                      \
{\
    printf("%d", tinh );\
    \
}


#define CreateFunc2(name, text)  \
void name()                     \
{                               \
    printf("%s", (char *)#text); \
}

// dấu # là chuỗi

#define variable(name) \
int name__##var1;\
int name__##var2;\
int name__##var3;

//  2 dấu # là nối chuỗi


#define VARB(...) __VA_ARGS__

CreateFunc(test1, "This is a new Func1\n");
CreateFunc2(abc, 1 +1\n);
MakeFuncCal(tong, 1+1);
MakeFuncCal(Tich, 2*3 );

int main()
{
    test1();
    abc();  
    tong();
    variable(check);
    VARB(int a, int b, int c; );

    return 0;
}