 #include <stdio.h>
 int main(void)
 {
   char vvod [255];
   int i = 0;
   printf("Введите текст:\n");
   while (scanf ("%c", &vvod[i]), vvod[i] != '\n')
          i++;
   for ( ; i >= 0; i--)
          printf("%c", vvod[i]);
   return 0;
 }
