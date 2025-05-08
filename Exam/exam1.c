# include <stdio.h>

int main () {
   for(int i = 1; i <= 20; i++) {
   // printf("%d", i);
   if (i % 2 == 0) {
    printf("%d \t", i);
   }
   else if(i % 3 == 0) {
    printf("%d \t", i);
   }
   }
   return 0;
}