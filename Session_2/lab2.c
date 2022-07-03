/*Yazmış olduğunuz mükemmel sayı, güçlü sayı, Armstrong sayısı
ve arkadaş sayılar metotlarını bir kütüphane içerisine aktarınız.*/
//palindrom
#include <stdio.h>
int palindrom(int num);
int main(){
int num1 =124563;
int num;
//scanf("%d",&num); 
printf("d\n",palindrom(num1));

    return 0;
}

int palindrom(int num){

int tmp=num;
int digits=0;
while (tmp!=0){
++digits;
tmp/=10;
}
printf("%d\n",digits);
return digits;
}
