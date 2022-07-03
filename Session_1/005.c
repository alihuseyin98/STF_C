#include <stdio.h>
#define lib "header1.h"
#include lib
#define PI 3.14
#define X 1+PI
//#define X SIFRE*var

int main(){
printf("%f\n",PI);
int xy=12;

#undef PI
//PI=2.2;
#define plus(x) (x+1)
#define PI 1.1
printf("%f\n",X);
printf("--%d\n",plus(5));
    return 0;
}