// Zad1.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <cmath>

int main()
{
	int nums1, nums2, res;
	printf_s("Vavedi nums1:");
	scanf_s("%d", &nums1);
	printf_s("Vavedi nums2:");
	scanf_s("%d", &nums2);
	if (nums1 < nums2)
	{
		res = nums1;
	}
	else
	{
		res = nums2;
	}
	printf_s("Po-malkoto chislo e: %#X\n", res);
}
