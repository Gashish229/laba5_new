#include <stdio.h>
int main(void)
{
   int mas1[8], mas2[8];
   int i;
   int sum = 0;
   char ch;
   printf("введите 8 чисел:\n");
   for (i = 0; i < 8; i++)
   {
      while (scanf("%d", &mas1[i]) != 1)
      {
         printf("!Ошибка ввода!\n");
         while ((ch = getchar()) != '\n' && ch != EOF);
      }
      sum += mas1[i];
      mas2[i] = sum;
   }
   for (i = 0; i < 8; i++)
   {
      printf("%5d", mas1[i]);
   }
   printf("\n");
   for (i = 0; i < 8; i++)
   {
      printf("%5d", mas2[i]);
   }
   return 0;
}
