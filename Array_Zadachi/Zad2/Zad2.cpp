// Zad2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	/*Suma i sredno aritmetichno*/
	double arr[10];
	float sum = 0;
	float srAr = 0;
	for (int i = 0; i < 10; i++)
	{
		printf_s("Chislo: ");
		scanf_s("%lf", &arr[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		sum += arr[i];
		
	}
	printf_s("Suma: %.2lf\n", sum);
	srAr = sum / 10;
	printf_s("Sredno aritmeticno: %.2lf", srAr);
}
