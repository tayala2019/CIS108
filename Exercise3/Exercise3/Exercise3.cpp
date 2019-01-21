// Tanmishia Ayala
//Exercise #3: Math with Prime Numbers
//Date: 01/17/2019

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	//Using a conditional loop to get from 2 to 1000
	for (int j = 2; j <= 1000; j++)
	{
		int i;
		for (i = 2; i <= j - 1; i++)
		{
			if (j%i == 0)
				break;
		}

		if (i == j && i != 1)
			cout << j << " ";
	}

	return 0;
}