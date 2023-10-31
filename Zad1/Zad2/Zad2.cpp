// Zad2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <cmath>

int main()
{
    int a;
    printf_s("Vavedi a:");
    scanf_s("%d", &a);
    if (a % 2)
    {
        printf_s("Chisloto e nechetno!");
    }
    else
    {
        printf_s("Chisloto e chetno!");
    }
}
