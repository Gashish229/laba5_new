 #include <stdio.h>
 #include <string.h>
 int main()
 {
   char slova[40];
   int i;
   printf ("введите слово:\n");
   scanf("%s", word);
   for (i = strlen(word) - 1; i >= 0; i--)
          printf("%c", word[i]);
   return 0;
 }
