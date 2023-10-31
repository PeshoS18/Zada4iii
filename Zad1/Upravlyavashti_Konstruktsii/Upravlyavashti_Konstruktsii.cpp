// Upravlyavashti_Konstruktsii.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <cmath>

int main()
{
	
	int num1, num2;
	printf_s("Vavedi num1:");
	scanf_s("%d", &num1);
	printf_s("Vavedi num2:");
	scanf_s("%d", &num2);
	if (num1 < num2)
	{
		printf_s("Po-malkoto chislo e: num1");
	}
	else
	{
		printf_s("Po-malkoto chislo e: num2");
	}
}
