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
	cout << "������� ����� ������� �� 1 �� 8\n";
	cin >> task;

	switch (task)
	{
		case 1:
		{
			cout << "�������� ��������� ���������� ��������� �����������,\n";
			cout << "���� �� �������� � ������������ ��������������� 20% ������. \n";
			cout << "������ ����������������� ��������� � ���� ������(����� �� 1 �� 7).\n";
			int day, t, pr;
			pr = 2;
			cout << "������� ���� ������ , ��� 1 - �����������, � 7 - �����������\n";
			cin >> day;
			cout << "\n������� ���������� �����\n";
			cin >> t;
			switch (day)
			{
			case 6:
			{
				cout << "������ ����� " << t - (t * 0.2) << "\n";
			}
			break;

			case 7:
			{
				cout << "������ ����� " << t - (t * 0.2) << "\n";
			}
			break;
			default:
			{
				cout << "������ ���\n";
			}
			break;
			}
		} break;

		case 2:
		{
			cout << "��������� ��������� ������� � ������ ������.\n";
			cout << "������ 5% ���������������, ���� ����� ������� ��������� 500 ����� \n";
			cout << "� 10%, ���� ������ 1000 �����.\n";
			unsigned int s;
			cout << "������� ��������� �������\n";
			cin >> s;
			if (s >= 500 && s < 1000)
			{
				cout << "���� �� ������� = " << s - (s * 0.05) << "\n";
			}
			else if (s >= 1000)
			{
				cout << "���� �� ������� = " << s - (s * 0.1) << "\n";
			}
			else
			{
				cout << "������ ���\n";
			}
		} break;
#pragma region TASK3
		case 3:
		{
		task3:
			cout << "������ � ������ ����� �� 1 �� 12.\n";
			cout << "�� ������ ������ ������ ��������� � ������� ����.\n";
			cout << "���� ������������ ������ ������������ �����, \n";
			cout << "��������� ������ ������ ��������� �� ������\n";
			int month;
			cout << "������� ����� �� 1 �� 12, ��� 1 - ������, � 12 - ������� --- ";
			cin >> month;
			switch (month)
			{
			case 1:
			{
				cout << "��� ����� ������\n";
			}
			break;
			case 2:
			{
				cout << "��� ����� �������\n";
			}
			break;
			case 3:
			{
				cout << "��� ����� ����\n";
			}
			break;
			case 4:
			{
				cout << "��� ����� ������\n";
			}
			break;
			case 5:
			{
				cout << "��� ����� ���\n";
			}
			break;
			case 6:
			{
				cout << "��� ����� ����\n";
			}
			break;
			case 7:
			{
				cout << "��� ����� ����\n";
			}
			break;
			case 8:
			{
				cout << "��� ����� ������\n";
			}
			break;
			case 9:
			{
				cout << "��� ����� ��������\n";
			}
			break;
			case 10:
			{
				cout << "��� ����� �������\n";
			}
			break;
			case 11:
			{
				cout << "��� ����� ������\n";
			}
			break;
			case 12:
			{
				cout << "��� ����� �������\n";
			}
			break;
			default:
			{
				cout << "������� ������������ �����\n";
				cout << "���������� ��� ���\n";
				goto task3;

			}

			}
		}
#pragma endregion

#pragma region TASK4
		case 4:
		{
			cout << "���� ��� ����� a, b, c. ����������, ������� �� ����� ��� ���� �� ���� ���� ������\n";
			int a, b, c;
			cout << "������� ����� � - ";
			cin >> a;
			cout << "\n������� ����� b - ";
			cin >> b;
			cout << "\n������� ����� c - ";
			cin >> c;

			if ((a == b) && (a == c))
			{
				cout << "��� ����� �����\n";
			}
			else if (a == b)
			{
				cout << "����� � == ����� �\n";
			}
			else if (a == c)
			{
				cout << "����� � == ����� �\n";
			}
			else
			{
				cout << "����� �� �����\n";
			}
		}
#pragma endregion

#pragma region TASK5

		case 5:
		{
			cout << "�������� ��������� ��� ����������� ������� ����� �� ������� �������� �������\n";
			cout << "� ������� ��������� (���� � � 6 �� 12,\n";
			cout << "���� � � 12 �� 18, \n";
			cout << "����� � � 18 �� 24, \n";
			cout << "���� � � 0 �� 6).\n";
			int h, m;
			cout << "������� ���� - ";
			cin >> h;
			cout << "\n������� ������ - ";
			cin >> m;
			if (h >= 6 && h < 12)
			{
				cout << "������ ����\n";
			}
			else if (h >= 12 && h < 18)
			{
				cout << "������ ����\n";
			}
			else if (h >= 18 && h < 0)
			{
				cout << "������ �����\n";
			}
			else
			{
				cout << "������ ����\n";
			}

		}

#pragma endregion

#pragma region TASK6

		case 6:
		{
			cout << "���� ����������� �����.����������:\n";
			cout << "a.������ �� � ���� ����� 5;\n";
			cout << "b.������ �� � ���� ����� �.\n";
			int i, a;
			cout << "������� ����� � - ";
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
			cout << "�������� ���������, ������� ��� ����� ����� � ��������� �� 1 �� 99\n";
			cout << "��������� � ���� ����� \"�������\" � ���������� �����.\n";
			cout << "��������, 1 �������, 5 ������, 42 �������\n";
			int i;
			for (i = 1; i <= 9; i++)
			{
				if (i % 10 == 1)
				{
					cout << i << " �������\n";
				}
				else if ((i % 10 == 2) || (i % 10 == 3) || (i % 10 == 4))
				{
					cout << i << " �������\n";
				}
				else
				{
					cout << i << " ������\n";
				}
			}
			for (i = 10; i <= 20; i++)
			{
				cout << i << " ������\n";
			}
			for (i = 21; i <= 99; i++)
			{
				if (i % 10 == 1)
				{
					cout << i << " �������\n";
				}
				else if ((i % 10 == 2) || (i % 10 == 3) || (i % 10 == 4))
				{
					cout << i << " �������\n";
				}
				else
				{
					cout << i << " ������\n";
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
						cout << "�����" << i <<" ���������\n";
					}
					

			
			})

			}
		
#pragma endregion

		
			
			


	}
}
