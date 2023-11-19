// Array_Zadachi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	/* Otpechatvane na elementi vyv vyzhodyasht red*/
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		printf_s("Chislo: ");
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		printf_s("Resulat[%d]:%d\n", i, arr[i]);
	}
}
