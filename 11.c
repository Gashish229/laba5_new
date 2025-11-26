#include <stdio.h>
 int main(void)
 {
   int i;
   int chisla[8];
   printf("введите 8 чисел:\n");
   for (i = 0; i < 8; i++)
           scanf("%d", &chisla[i]);
   for (i = 7; i >= 0; i--)
          printf("%d", chisla[i]);
   return 0;
 }
