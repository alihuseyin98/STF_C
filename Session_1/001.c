#include <stdio.h>

int main(){

printf("Welcome\n"); // %d
//printf("Welcome number %d %d %d %d \n",5,6,7);
int age;
scanf( " %d", &age );
printf("you are %d years old",age);       
//-----------------------
int integer1, integer2, sum;        /* declaration */
printf( "Enter first integer\n" );  
scanf( "%d", &integer1 );     
printf( "Enter second integer\n" ); 
scanf( " %d", &integer2 ); 
sum = integer1 + integer2; 
printf( "Sum is %d\n", sum );                
printf("%d %d %.2f",5,12,3.454646);

return 0;
}
