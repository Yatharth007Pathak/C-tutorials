#include <stdio.h>

int main () {
   int a = 3, b = 2, c;
   c=a ;
   a=b ;
   b=c;

   printf (" a = %d \n",a);
   printf (" b = %d \n", b);

   return 0;
   }