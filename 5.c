#include <stdio.h>
int main() {
    char bukva;
    printf("Введите букву: ");
    scanf("%c", bukva);
    for (char i = 'A'; i <= bukva; i++) 
    {
        for (char j = bukva; j > i; j--) // Пробелы
        {
            printf(" ");
        }
        for (char j = 'A'; j <= i; j++) // Вывод букв по возрастанию
        {
            printf("%c", j);
        }
        for (char j = i - 1; j >= 'A'; j--) // Вывод букв по убыванию
        {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}
