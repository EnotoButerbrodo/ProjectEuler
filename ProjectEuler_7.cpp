/*
Выписав первые шесть простых чисел, получим 2, 3, 5, 7, 11 и 13. Очевидно, что 6-ое простое число - 13.

Какое число является 10001-ым простым числом?
*/

#include "stdafx.h"
#include <iostream>

#define MAX 10001               //Какое по счёту простое число мы ищем
using namespace std;
bool simple(int);               //Определение простоты числа
int main()
{
	int count=1;                //Номер простого числа
	for (int i = 1;; i++) {     //Перебор всех чисел
		if (simple(i)) count++; 
		if (count == MAX) {     //При достижении нужного по счёту простого числа выводим его
			cout << i<<endl;
			break;
		}
	}
	system("pause");
	return 0;
}

bool simple(int number) {
	for (int i = 2; i < number; i++) {
		if (number%i == 0)return 0;
	}
	return 1;
}