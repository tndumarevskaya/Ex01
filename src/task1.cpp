#include "task1.h"
#include <iostream>

using namespace std;

unsigned int getPrime(unsigned int n)
{
	int m = 0;
	int k = 1;
	while (m != n)
	{
		int del = 0;
		for (int i = 1; i <= k / 2; i++)
		{
			if (n % i == 0)
				del++;
			if (del == 1)
			{
				m++;
				if (m == n)
					return k;
			}
		}
		k++;
	}

}