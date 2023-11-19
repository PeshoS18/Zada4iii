// Zad3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int biggest[10];
	int segashnaStoinost = 0;
	for (int i = 0; i < 10; i++)
	{
		printf_s("Chislo: ");
		scanf_s("%d", &biggest[i]);
		

		if (segashnaStoinost <= biggest[i])
		{
			segashnaStoinost = biggest[i];
			printf("Nai-golyamoto chislo e: [%d] %d\n", i, segashnaStoinost);
		}
		else
		{
			printf("Ne e po-golaymo!\n");
		}
	}
}
