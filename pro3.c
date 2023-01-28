#include <stdio.h>

int main(void){
   int count = 0;
   char str[] = "hello";

   for(int i = 0; str[i]!=NULL; i++){
    count++;
   }
   printf("%s,%d", str, count);
   return 0;
}
