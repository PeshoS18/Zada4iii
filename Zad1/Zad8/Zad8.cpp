// Zad8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <cmath>

int main()
{
    int a, b;
    int number;
    printf_s("Vavedi a:");
    scanf_s("%d", &a);
    printf_s("Vavedi b:");
    scanf_s("%d", &b);
    printf_s("Vavedi number:");
    scanf_s("%d", &number);
    switch (number)
    {
    case 1:
        number = a + b;
        break;
    case 2:
        number = a - b;
        break;
    case 3:
        number = a * b;
        break;
    case 4:
        number = a / b;
        break;
    }
    printf_s("Resultat: %d\n", number);

}
