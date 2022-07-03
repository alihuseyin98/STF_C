#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
srand( time( NULL ) );
float i = rand();
printf("%f\n",i);

float e = rand();
printf("%f\n",e);
float s = rand();
printf("%f\n",s);

for (size_t i = 0; i < 10; i++)
{
  printf("last v %d\n",(1 + ( (rand() % 13))));
}


    return 0;
}