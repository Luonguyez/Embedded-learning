#include <stdio.h>
#include <time.h>

void delay(){
    for (int i = 0; i < 100000000; i++);
}


int main(int argc, char const *argv[])
{
  clock_t start, end;

  double time;

  int i = 0;

  start = clock();

  for (; i < 100000000; i++);
  
   end = clock();

   time = (double)(end -start)/CLOCKS_PER_SEC;

   printf("time: %f\n", time);
   
    return 0;
}