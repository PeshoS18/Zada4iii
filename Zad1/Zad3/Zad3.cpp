// Zad3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <cmath>

int main()
{
    int x, y;
    printf_s("Vavedi x:");
    scanf_s("%d", &x);
    printf_s("Vavedi y:");
    scanf_s("%d", &y);
    int z = x / y;
    if (z % 2)
    {
        printf_s("Dvete chisla ne se delyat tochno!");
    }
    else
    {
        printf_s("Resultat: %d\n", z);
    }
}
