/*
2520 - самое маленькое число, которое делится без остатка на все числа от 1 до 10.

Какое самое маленькое число делится нацело на все числа от 1 до 20?
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

bool check(unsigned int);

int main()
{


	for (unsigned long i = 20; i > 0; i++) {
		if (check(i)) {
			cout << i;
			break;
		}
	}

	system("pause");
    return 0;
}


bool check(unsigned int number) {
	for (int i = 1; i <= 20; i++) {
		if (number%i != 0)return 0;
	}
	return 1;
}

