#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <iomanip>
#include <cmath>


//float Plus(float num1, float num2)
//{
//	return num1 + num2;
//}
//float Minus(float num1, float num2)
//{
//	return num1 - num2;
//}
//float Del(float num1, float num2)
//{
//	return num1 / num2;
//}
//float Um(float num1, float num2)
//{
//	return num1 * num2;
//} 


//void pechat(int arr1[], int arr2[], int size);
//void change(int arr1[], int arr2[], int size);

//void PrintArray(int mass1[]);
//
//void PrintArray(char mass2[]);
//
//void PrintArray(bool mass3[]);
//
//void SetArray(int mass1[]);
//
//void SetArray(char mass2[]);
//
//void SetArray(bool mass3[]);

template<typename T, typename L>
L Sum(T first, L second)
{
	return (L)(first + second);
}




int main()
{
	//setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	
	std::cout << Sum(4, 5.4);


	/*int mass1[5]{};
	SetArray(mass1);

	char mass2[5]{};
	SetArray(mass2);

	bool mass3[5]{};
	SetArray(mass3);*/

	/*int const size = 5;
	int arr1[size]{1, 2, 3, 4, 5}, arr2[size]{5, 4, 3, 2, 1};

	std::cout << "\n\t������ ��: \n\t";
	pechat(arr1, arr2, size);
	std::cout << "\n\t������ �����: \n\t";
	change(arr1, arr2, size);
	pechat(arr1, arr2, size);*/

	/*float num1, num2;
	int choose;
	std::cout << "\n\t������� ����� 1: ";
	std::cin >> num1;
	std::cout << "\n\t������� ����� 2: ";
	std::cin >> num2;
	while (true)
	{
		std::cout << "\n\t�������� ��������(�����): \n\t1. ���� \n\t2. ����� \n\t3. ������ \n\t4. ��������\n\t";
		std::cin >> choose;
		if (choose < 1 || choose > 4)
		{
			std::cout << "\n\t���� �����\n\t";
		}
		else
		{
			break;
		}
	}
	if (choose == 1)
	{
		std::cout << "\n\t���������: " << Plus(num1, num2);		
	}
	else if (choose == 2)
	{
		std::cout << "\n\t���������: " << Minus(num1, num2);
	}
	else if (choose == 3)
	{
		while (true)
		{
			if (num2 == 0)
			{
				std::cout << "\n\t������ ����� �� ������ ���� 0, ����� ������ ��������: \n\t";
				std::cin >> num2;
			}
			else
			{
				break;
			}
		}
		std::cout << "\n\t���������: " << Del(num1, num2);
	}
	else if (choose == 4)
	{
		std::cout << "\n\t���������: " << Um(num1, num2);
	}*/

	/*int arr[3][5]; int summ = 0; int kolonki = 0, stroki = 0, pop = 0;
	std::cout << "\n\n\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
				arr[i][j] = rand() % 150;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << "\t" << arr[i][j] << "\t";
			summ = arr[i][j] + summ;
		}
		kolonki = kolonki + summ;
		std::cout << "|\t" << summ << "\n";
		summ = 0;
	}
	std::cout << "\t" << "-------------------------------------------------------------------------------------\n";
	summ = 0;
	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 3; i++)
		{
			summ = arr[i][j] + summ;
		}
		std::cout << "\t" << summ << "\t";
		stroki = stroki + summ;
		summ = 0;
	}
	std::cout << "|\t" << kolonki << "\n\n";
	system("pause");*/

	/*int mass[10]{};
	for (int i = 0; i < 10; i++)
	{
		mass[i] = rand() % 29 - 15;
		std::cout << mass[i] << " ";
	}
	std::cout << "\n";
	for (int i = 0; i < 10; i++)
	{
		if (mass[i] >= 0)
		{
			std::cout << mass[i] << " ";
		}
	}
	std::cout << "\n";
	for (int i = 0; i < 10; i++)
	{
		if (mass[i] < 0)
		{
			std::cout << mass[i] << " ";
		}
	}*/

	/*int summ = 0;
	int massiv[6]{};
	for (int i = 0; i < 6; i++)
	{
		std::cout << "\n\t������� ����� �������\n\t";
		std::cin >> massiv[i];
	}
	for (int i = 0; i < 6; i++)
	{
		summ = summ + massiv[i];
		
	}
	std::cout << "\n\t����� ���� ����� - " << summ;
	*/

	/*float rub;
	int valuta, choose = 1;
	
	while (true)
	{
		if (choose == 1)
		{
			while (true)
			{
				std::cout << "����� ���� ��� � ��:\n";
				std::cin >> rub;
				if (rub > 0)
				{
					break;
				}
				else
				{
					std::cout << "����� ����\n";
					
				}
			}

			while (true)
			{
				std::cout << "\n\t����� ������ �� ��������� (������ �����)??\n\n\t1.������\n\t2.����\n\t3.����\n\t4.�����\n\t5.����\n";

				std::cin >> valuta;
				if (valuta < 1 || valuta > 5)
				{
					std::cout << "\n\t�� �� ����? ��� ��� �����";
					continue;
				}
				else
				{
					break;
				}
			}

			if (valuta == 1)
			{
				std::cout << "\n\t�� ���� " << rub << " rub ����� ������ " << (rub - (rub * 0.05)) * 0.011998 << " ��������";
			}
			else if (valuta == 2)
			{
				std::cout << "\n\t�� ���� " << rub << " rub ����� ������ " << (rub - (rub * 0.05)) * 0.010097 << " ����";
			}
			else if (valuta == 3)
			{
				std::cout << "\n\t�� ���� " << rub << " rub ����� ������ " << (rub - (rub * 0.05)) * 0.08546 << " �����";
			}
			else if (valuta == 4)
			{
				std::cout << "\n\t�� ���� " << rub << " rub ����� ������ " << (rub - (rub * 0.05)) * 37 << " ������-����";
			}
			else if (valuta == 5)
			{
				std::cout << "\n\t�� ���� " << rub << " rub ����� ������ " << (rub - (rub * 0.05)) * 1.78 << " ����";
			}
			
			
			while (true)
			{
				std::cout << "\n\t��������� ��� ���?\n\t�� - 1\n\t��� - 2\n\t";
				std::cin >> choose;
				if (choose == 1 || choose == 2)
				{
					break;
				}
				else
				{
					std::cout << "\n\t���� ����� ��";
				}
			}
			
		}
		else if (choose == 2)
		{
			break;
		}
	}*/
	
	/*int a = 0, b = 0;
	while (b < 8)
	{
		a = 0;
		while (a < 5)
		{
			std::cout << "*";
			a++;
		}
		std::cout << "\n";
		b++;
	}*/

	/*int a = 0, b = 0;
	while (b < 8)
	{
		a = 0;
		while (a < 15)
		{
			if (a + b == 7 or a == 8 + b)
			{
				std::cout << " ";
			}
			std::cout << "*";
			a++;
		}
		std::cout << "\n";
		b++;
	}*/
	
	/*float one, two;
	std::cout << "������� 1 �����\n";
	std::cin >> one;
	std::cout << "��� ����� ������� ? \n* 1 \n/ 2 \n+ 3 \n- 4\n";
	int choose;
	std::cin >> choose;
	std::cout << "������� 2 �����\n";
	std::cin >> two;
	if (choose == 1)
	{
		std::cout << "\n�����:" << one * two;
	}
	else if (choose == 2)
	{
		std::cout << "\n�����:" << one / two;
	}
	else if (choose == 3)
	{
		std::cout << "\n�����:" << one + two;
	}
	else if (choose == 4)
	{
		std::cout << "\n�����:" << one - two;
	}
	else
	{
		std::cout << "\n�� �� ����";
	}*/
	return 0;
}

//void pechat(int arr1[], int arr2[], int const size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		std::cout << arr1[i] << " ";
//	}
//	std::cout << "\n\t";
//	for (int i = 0; i < size; i++)
//	{
//		std::cout << arr2[i] << " ";
//	}
//}
//
//void change(int arr1[], int arr2[], int size)
//{
//	int Temp;
//	for (int i = 0; i < size; i++)
//	{
//		Temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = Temp;
//	}
//}

//void PrintArray(int mass1[])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		std::cout << mass1[i] << " ";
//	}
//	std::cout << "\n";
//}
//void PrintArray(char mass2[])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		std::cout << mass2[i] << " ";
//	}
//	std::cout << "\n";
//}
//void PrintArray(bool mass3[])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		std::cout << mass3[i] << " ";
//	}
//	std::cout << "\n";
//}
//
//
//
//
//void SetArray(int mass1[])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		mass1[i] = rand() % 10 + 1;
//	}
//	PrintArray(mass1);
//}
//
//void SetArray(char mass2[])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		mass2[i] = rand() % 58+65;
//	}
//	PrintArray(mass2);
//}
//
//void SetArray(bool mass3[])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		mass3[i] = rand() % 2;
//	}
//	PrintArray(mass3);
//}