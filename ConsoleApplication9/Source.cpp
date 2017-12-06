#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <locale.h>
#include <math.h>
#include <time.h>
#include <Windows.h> // WinApi Header

using namespace std;
// smth
int main()
{
	HANDLE hConsole;
	int color = 4;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, color);
	setlocale(LC_ALL, "Rus");

MyStart:
	int task = 0;
	char yn = 0;
	cout << "Введите номер задания от 1 до 8\n";
	cin >> task;

	switch (task)
	{
		case 1:
		{
			cout << "Написать программу вычисления стоимости переговоров,\n";
			cout << "если по субботам и воскресеньям предоставляется 20% скидка. \n";
			cout << "Ввести продолжительность разговора и день недели(цифра от 1 до 7).\n";
			int day, t, pr;
			pr = 2;
			cout << "Введите день недели , где 1 - Понедельник, а 7 - Воскресенье\n";
			cin >> day;
			cout << "\nВведите количество минут\n";
			cin >> t;
			switch (day)
			{
			case 6:
			{
				cout << "Скидка равна " << t - (t * 0.2) << "\n";
			}
			break;

			case 7:
			{
				cout << "Скидка равна " << t - (t * 0.2) << "\n";
			}
			break;
			default:
			{
				cout << "Скидки нет\n";
			}
			break;
			}
		} break;

		case 2:
		{
			cout << "Вычислить стоимость покупки с учетом скидки.\n";
			cout << "Скидка 5% предоставляется, если сумма покупки превышает 500 тенге \n";
			cout << "и 10%, если больше 1000 тенге.\n";
			unsigned int s;
			cout << "Введите стоимость покупки\n";
			cin >> s;
			if (s >= 500 && s < 1000)
			{
				cout << "Цена со скидкой = " << s - (s * 0.05) << "\n";
			}
			else if (s >= 1000)
			{
				cout << "Цена со скидкой = " << s - (s * 0.1) << "\n";
			}
			else
			{
				cout << "Скидки нет\n";
			}
		} break;
#pragma region TASK3
		case 3:
		{
		task3:
			cout << "Ввести с экрана число от 1 до 12.\n";
			cout << "По номеру месяца выдать сообщение о времени года.\n";
			cout << "Если пользователь введет недопустимое число, \n";
			cout << "программа должна выдать сообщение об ошибке\n";
			int month;
			cout << "Введите число от 1 до 12, где 1 - Январь, а 12 - Декабрь --- ";
			cin >> month;
			switch (month)
			{
			case 1:
			{
				cout << "Это месяц Январь\n";
			}
			break;
			case 2:
			{
				cout << "Это месяц Февраль\n";
			}
			break;
			case 3:
			{
				cout << "Это месяц Март\n";
			}
			break;
			case 4:
			{
				cout << "Это месяц Апрель\n";
			}
			break;
			case 5:
			{
				cout << "Это месяц Май\n";
			}
			break;
			case 6:
			{
				cout << "Это месяц Июнь\n";
			}
			break;
			case 7:
			{
				cout << "Это месяц Июль\n";
			}
			break;
			case 8:
			{
				cout << "Это месяц Август\n";
			}
			break;
			case 9:
			{
				cout << "Это месяц Сентябрь\n";
			}
			break;
			case 10:
			{
				cout << "Это месяц Октябрь\n";
			}
			break;
			case 11:
			{
				cout << "Это месяц Ноябрь\n";
			}
			break;
			case 12:
			{
				cout << "Это месяц Декабрь\n";
			}
			break;
			default:
			{
				cout << "Введено недопустимое число\n";
				cout << "Попробуйте ещё раз\n";
				goto task3;

			}

			}
		}
#pragma endregion

#pragma region TASK4
		case 4:
		{
			cout << "Даны три числа a, b, c. Определить, имеется ли среди них хотя бы одна пара равных\n";
			int a, b, c;
			cout << "Введите число а - ";
			cin >> a;
			cout << "\nВведите число b - ";
			cin >> b;
			cout << "\nВведите число c - ";
			cin >> c;

			if ((a == b) && (a == c))
			{
				cout << "Все числа равны\n";
			}
			else if (a == b)
			{
				cout << "Число А == числу В\n";
			}
			else if (a == c)
			{
				cout << "Число А == числу С\n";
			}
			else
			{
				cout << "Числа не равны\n";
			}
		}
#pragma endregion

#pragma region TASK5

		case 5:
		{
			cout << "Написать программу для определения времени суток по данному текущему времени\n";
			cout << "и вывести сообщение (утро – с 6 до 12,\n";
			cout << "день – с 12 до 18, \n";
			cout << "вечер – с 18 до 24, \n";
			cout << "ночь – с 0 до 6).\n";
			int h, m;
			cout << "Введите часы - ";
			cin >> h;
			cout << "\nВведите минуты - ";
			cin >> m;
			if (h >= 6 && h < 12)
			{
				cout << "Сейчас утро\n";
			}
			else if (h >= 12 && h < 18)
			{
				cout << "Сейчас день\n";
			}
			else if (h >= 18 && h < 0)
			{
				cout << "Сейчас вечер\n";
			}
			else
			{
				cout << "Сейчас ночь\n";
			}

		}

#pragma endregion

#pragma region TASK6

		case 6:
		{
			cout << "Дано двухзначное число.Определить:\n";
			cout << "a.входит ли в него цифра 5;\n";
			cout << "b.входит ли в него цифра а.\n";
			int i, a;
			cout << "Введите число а - ";
			cin >> a;
			for (i = 10; i <= 99; i++)
			{
				if ((i % 10) == 5 )
				{
					cout << i << "\n";
				}
				else if ((i % 10) == a)
				{
					cout << i << "\n";
				}
				else if ((i % 100) == 5)
				{
					cout << i << "\n";
				}
				else if ((i % 100) == a)
				{
					cout << i << "\n";
				}
			}

		}
#pragma endregion

#pragma region TASK7
		case 7:
		{
			cout << "Написать программу, которая при вводе числа в диапазоне от 1 до 99\n";
			cout << "добавляет к нему слово \"копейка\" в правильной форме.\n";
			cout << "Например, 1 копейка, 5 копеек, 42 копейки\n";
			int i;
			for (i = 1; i <= 9; i++)
			{
				if (i % 10 == 1)
				{
					cout << i << " копейка\n";
				}
				else if ((i % 10 == 2) || (i % 10 == 3) || (i % 10 == 4))
				{
					cout << i << " копейки\n";
				}
				else
				{
					cout << i << " копеек\n";
				}
			}
			for (i = 10; i <= 20; i++)
			{
				cout << i << " копеек\n";
			}
			for (i = 21; i <= 99; i++)
			{
				if (i % 10 == 1)
				{
					cout << i << " копейка\n";
				}
				else if ((i % 10 == 2) || (i % 10 == 3) || (i % 10 == 4))
				{
					cout << i << " копейки\n";
				}
				else
				{
					cout << i << " копеек\n";
				}
			}
		}
#pragma endregion

#pragma region TASK8
		case 8:
			int i, a, b, c, e;
			for (i = 1000; i <= 9999; i++)
			{
					b = i / 1000;
					a = i % 1000;
					c = i / 100;
					a = i % 100;
					a = i % 10;
					e = i / 1;

					if (b == a && c == e)
					{
						cout << "Число" << i <<" палиндром\n";
					}
					

			
			})

			}
		
#pragma endregion

		
			
			


	}
}
