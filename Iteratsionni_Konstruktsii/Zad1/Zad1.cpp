// Zad1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <cmath>

int main()
{
    int tseliChisla;
	printf_s("Vavedi tseliChisla:");
	scanf_s("%d", &tseliChisla);
	for (int i = 0; i <= tseliChisla; i++)
	{
		if ( i % 7 == 0)
		{
			printf_s("Resultat: %d\n", i);
		}
	}
}
