#include <stdio.h>

 int main() {
     int x, y;
     int result;
     scanf("%d %d", &x, &y);

     if(x>0) {
         if (y>0)
             result = 1;
         else
             result = 4;
     }
     else {
         if (y>0)
             result = 2;
         else
             result = 3;
     }

     printf("%d", result);
     return 0;
 }