#include <stdio.h>

int main () {
 
 int a = 5, b = 6, c = 4;
 
 if ( a > b && a > c )
    printf("A is the maximum value");
 else if ( b > a && b > c ) 
      printf("B is the maximum value");
 else
     printf("C is the maximum value"); 
     
 return 0;
}
