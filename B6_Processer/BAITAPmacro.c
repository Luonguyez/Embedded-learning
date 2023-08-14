#include <stdio.h>
#define INCREMENT(x) ++x
int main()
{

char *ptr = "Tapit";
int x = 99;
printf("%s\n", INCREMENT(ptr));
printf("%d\n", INCREMENT(x));
return 0;

}