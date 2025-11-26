#include<stdio.h>
int main(void)
{
    char nachalo = 'F';
    int stroki = 6;
    for(int i = 0; i < stroki; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%c", nachalo - j);
        }
        printf("\n");
    }
    return 0;
}
