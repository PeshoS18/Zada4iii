// Zad5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <cmath>

int main()
{
    int a, b, c, x1, x2;
    printf_s("Vavedi a:");
    scanf_s("%d", &a);
    printf_s("Vavedi b:");
    scanf_s("%d", &b);
    printf_s("Vavedi c:");
    scanf_s("%d", &c);
    int diskriminanta = pow(b, 2) - (4 * a * c);
    if (diskriminanta > 0)
    {
        x1 = (-b + sqrt(diskriminanta)) / (2 * a);
        printf_s("x1: %d\n", x1);
        x2 = (- b - sqrt(diskriminanta)) / (2 * a);
        printf_s("x2: %d\n", x2);
    }
    else if(diskriminanta == 0)
    {
        x1 = x2 = -b / (2 * a);
    }
    else
    {
        printf_s("N.R.K");
    }
}

