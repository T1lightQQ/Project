#include <iostream>
#include <cstdlib>
#include <Windows.h>

int main()
{
	//setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int arr[3][5]; int summ = 0; int kolonki = 0, stroki = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << arr[i][j] << "\t";
			summ = arr[i][j] + summ;
		}
		kolonki = kolonki + summ;
		std::cout << "|\t" << summ << "\n";
		summ = 0;
	}
	std::cout << "----------------------------------------------------\n";
	summ = 0;
	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 3; i++)
		{
			summ = arr[i][j] + summ;
		}
		std::cout << summ << "\t";
		stroki = stroki + summ;
		summ = 0;
	}
	summ = 0;
	std::cout << "|\t" << kolonki + stroki << "\n";
	system("pause");














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
		std::cout << "\n\tВведите число массива\n\t";
		std::cin >> massiv[i];
	}
	for (int i = 0; i < 6; i++)
	{
		summ = summ + massiv[i];
		
	}
	std::cout << "\n\tСумма всех будет - " << summ;
	*/

	/*float rub;
	int valuta, choose = 1;
	
	while (true)
	{
		if (choose == 1)
		{
			while (true)
			{
				std::cout << "Введи скок руб у тя:\n";
				std::cin >> rub;
				if (rub > 0)
				{
					break;
				}
				else
				{
					std::cout << "Введи норм\n";
					
				}
			}

			while (true)
			{
				std::cout << "\n\tКакую валюту те посчитать (выбери цифру)??\n\n\t1.Доллар\n\t2.Евро\n\t3.Юань\n\t4.Фарит\n\t5.Йена\n";

				std::cin >> valuta;
				if (valuta < 1 || valuta > 5)
				{
					std::cout << "\n\tЧе ты ввел? Еще раз давай";
					continue;
				}
				else
				{
					break;
				}
			}

			if (valuta == 1)
			{
				std::cout << "\n\tНа твои " << rub << " rub можно купить " << (rub - (rub * 0.05)) * 0.011998 << " Долларов";
			}
			else if (valuta == 2)
			{
				std::cout << "\n\tНа твои " << rub << " rub можно купить " << (rub - (rub * 0.05)) * 0.010097 << " евро";
			}
			else if (valuta == 3)
			{
				std::cout << "\n\tНа твои " << rub << " rub можно купить " << (rub - (rub * 0.05)) * 0.08546 << " юаней";
			}
			else if (valuta == 4)
			{
				std::cout << "\n\tНа твои " << rub << " rub можно купить " << (rub - (rub * 0.05)) * 37 << " Фарита-коин";
			}
			else if (valuta == 5)
			{
				std::cout << "\n\tНа твои " << rub << " rub можно купить " << (rub - (rub * 0.05)) * 1.78 << " йена";
			}
			
			
			while (true)
			{
				std::cout << "\n\tПосчитать еще раз?\n\tДа - 1\n\tНет - 2\n\t";
				std::cin >> choose;
				if (choose == 1 || choose == 2)
				{
					break;
				}
				else
				{
					std::cout << "\n\tнорм введи да";
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
	std::cout << "Введите 1 число\n";
	std::cin >> one;
	std::cout << "Что нужно сделать ? \n* 1 \n/ 2 \n+ 3 \n- 4\n";
	int choose;
	std::cin >> choose;
	std::cout << "Введите 2 число\n";
	std::cin >> two;
	if (choose == 1)
	{
		std::cout << "\nОтвет:" << one * two;
	}
	else if (choose == 2)
	{
		std::cout << "\nОтвет:" << one / two;
	}
	else if (choose == 3)
	{
		std::cout << "\nОтвет:" << one + two;
	}
	else if (choose == 4)
	{
		std::cout << "\nОтвет:" << one - two;
	}
	else
	{
		std::cout << "\nне то ввел";
	}*/
	return 0;
}