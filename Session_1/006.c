#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
srand( time( NULL ) );

for (size_t i = 1; i < 21; i++)
{
  printf("%7d",(1 + ( (rand() %6))));
  if(i%5==0){
    printf(" \n");
  }
}


    return 0;
}