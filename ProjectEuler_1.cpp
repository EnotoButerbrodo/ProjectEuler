/*
Задание 1:
Если выписать все натуральные числа меньше 10, кратные 3 или 5, то получим 3, 5, 6 и 9. Сумма этих чисел равна 23. 

Найдите сумму всех чисел меньше 1000, кратных 3 или 5.

																							Сделал : Игорёша, 01/11/2019
*/
#include "stdafx.h"
#include <iostream>
#include <vector>

#define MIN_NUMBER 1			//Начало диапозона
#define MAX_NUMBER 1000			//Конец диапозона
#define MULTIPLE_NUMBER_1 3		//Первый множитель
#define MULTIPLE_NUMBER_2 5		//Второй множитель
using namespace std;

vector<unsigned int> goodNumbers;			//Вектор, содержащий все подходящие числа
unsigned int answer = 0;					//Сумма всех подходящих цифр


int main()
{
	setlocale(LC_ALL, "Russian");
	for (int number = MIN_NUMBER; number < MAX_NUMBER; number++) {									  //Проходим циклом по всем натуральным числам от 0 до заданого максимума
		if (number % MULTIPLE_NUMBER_1 == 0 || number % MULTIPLE_NUMBER_2 == 0) {					  //Если находим нужное число
			goodNumbers.push_back(number);															  //Добавляем его в наш вектор
			answer += number;																		  //Прибавляем к ответу
		}
	}
	//Вывод результата
	cout << "Нужные числа" << endl;
	for (vector<unsigned int>::iterator it = goodNumbers.begin(); it != goodNumbers.end(); ++it) { 
		cout << *it<<" ";
	}
	cout << endl<< "Их сумма " << answer << endl;
	system("pause");																				//Чтобы программа не отключалась сама
	return 0;
}



