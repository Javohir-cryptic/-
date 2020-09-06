#include <stdio.h>
#include <iostream>
#include <locale.h>
#pragma warning(disable : 4996)

int main()
{
    int a, b;
    setlocale(LC_ALL, "Rus");
    printf("Введите два числа");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        printf("Наибольшее %d", a);
    }
    else
    {
        printf("Наибольшее %d", b);
    }
    do {} while (1 == 1);
}