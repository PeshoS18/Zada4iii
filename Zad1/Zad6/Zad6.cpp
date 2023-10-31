// Zad6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <cmath>

int main()
{
    int x, y, z;
    printf_s("Vavedi x:");
    scanf_s("%d", &x);
    printf_s("Vavedi y:");
    scanf_s("%d", &y);
    printf_s("Vavedi z:");
    scanf_s("%d", &z);
    if (x > y)
    {
        if (x > z)
        {
            printf_s("Nay-golyama stoynost ima: x");
        }
        else
        {
            printf_s("Nay-golyama stoynost ima: z");
        }
    }
    else if(y > z)
    {
        printf_s("Nay-golyama stoynost ima: y");
    }
    else
    {
        printf_s("Nay-golyama stoynost ima: z");
    }
}
