// Zad1.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <cmath>

int main()
{
	float number1, number2, res;
	printf_s("Vavedi number1:");
	scanf_s("%f", &number1);
	printf_s("Vavedi number2:");
	scanf_s("%f", &number2);
	if (number1 > number2)
	{
		res = number1;
	}
	else
	{
		res = number2;
	}
	printf_s("Po-malkoto chislo e: %f\n", res);
}
