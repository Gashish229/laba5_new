#include <stdio.h>
double calculator(double chisel1, double chisel2)
{
    return (a - b) / (a * b);
}
int main() {
    double chisel1, chisel2;
    while (1) {
        printf("Введите два числа: ");
        if (scanf("%lf %lf", &chisle1, &chisel2) != 2) 
        {
            break;
        }
        double result = calculator(chisel1, chisel2);
        printf("%.4f\n", result);
    }
    return 0;
}
