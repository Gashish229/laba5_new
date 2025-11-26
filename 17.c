#include <stdio.h>
 int main(void)
{
 float money = 1000000.0f;
 int year = 0;
 while (money > 0)
        {
         year++;
         money -= 100000.0f;
         money = (money * 1.08f);
         printf("год: %d, баланс счета: %.1f\n", year, money);
        }
 printf("Банкротство наступит через %2d  лет ($ %.1f баланс счета)", year, money);
 return 0;
 }
