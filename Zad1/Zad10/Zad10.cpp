// Zad10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <cmath>

int main()
{
	int n;
	printf_s("Vavedete n:");
	scanf_s("%d", &n);
	if (n % 2)
	{
		printf_s("n * 2 \n");
		n = n * 2;
		printf_s("Resultat: %d\n", n);
		if (n <= 30000)
		{
			printf_s("n * 2 \n");
			n = n * 2;
			printf_s("Resultat: %d\n", n);
			printf_s("Chisloto e po-malko ot 300000");

		}
		else
		{
			printf_s("Kraen resultat: %d\n", n);
			printf_s("Chisloto e po-golyamo ot 300000");
		}
	}
	else
	{
		printf_s("Chisloto e chetno i ne se izvyshvat po-natatashni deystviya!");
	}
}
