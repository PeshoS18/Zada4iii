// Zad7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <cmath>

int main()
{
    int a, b, c;
    printf_s("Vavedi a:");
    scanf_s("%d", &a);
    printf_s("Vavedi b:");
    scanf_s("%d", &b);
    printf_s("Vavedi c:");
    scanf_s("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf_s("Nay-golyama stoynost ima: a \n");
            if (a < b + c)
            {
                printf_s("Mozhe da se obrazuva triygylnik!");
            }
            else
            {
                printf_s("Ne mozhe da se obrazuva triygylnik!");
            }
        }
        else if (c < a + b)
        {
            printf_s("Nay-golyama stoynost ima: c \n");
            printf_s("Mozhe da se obrazuva triygylnik!");
        }
        else
        {
            printf_s("Nay-golyama stoynost ima: c \n");
            printf_s("Ne mozhe da se obrazuva triygylnik!");
        }
    }
    else if (b > c)
    {
        printf_s("Nay-golyama stoynost ima: b \n");
        if (b < a + c)
        {
            printf_s("Mozhe da se obrazuva triygylnik!");
        }
        else
        {
            printf_s("Ne mozhe da se obrazuva triygylnik!");
        }
    }
    else if(c < a + b)
    {
        printf_s("Nay-golyama stoynost ima: c \n");
        printf_s("Mozhe da se obrazuva triygylnik!");
    }
    else
    {
        printf_s("Nay-golyama stoynost ima: c \n");
        printf_s("Ne mozhe da se obrazuva triygylnik!");
    }
}
