// Zad9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <cmath>

int main()
{
    float chas;
    printf_s("Vavedete chas: ");
    scanf_s("%f", &chas);
    if (chas >= 0.00 && chas <= 8.59)
    {
        printf_s("Dobro Utro!");
    }
    else if (chas >= 9.00 && chas <= 16.59)
    {
        printf_s("Dobar Den!");
    }
    else if (chas >= 17.00 && chas <= 21.59)
    {
        printf_s("Dobar Vecher!");
    }
    else if (chas >= 22.00 && chas <= 23.59)
    {
        printf_s("Leka Nosht!");
    }
    else
    {
        printf_s("Nyama takova vreme!");
    }
}
