#include <stdio.h>
 int main(void)
 {
   int chisla[9];
   int stepen = 1;
   int i;
   for (i=1; i < 9; i++)
          {
          stepen *= 2;
          chisla[i] = stepen;
          }
   i = 1;
   do 
   {
     printf("[%d] = %d\n", i, chisla[i]);
     i++;
   } while (i < 9);
   return 0;
 }
