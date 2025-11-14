#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <iomanip>
#include <cmath>
#include <string>


// ----------------Учетки-----------------
size_t userSize = 2;
std::string userStatus[3]{ "Супер Администратор", "Администратор", "Сотрудник" };
std::string* loginArr = new std::string[userSize]{ "login", "login1" };
std::string* passArr = new std::string[userSize]{ "parol", "parol1" };
std::string* statusArr = new std::string[userSize]{ userStatus[0], userStatus[2]};
std::string currentStatus;
// ---------------------------------------



// -----------Cклад--------------
size_t storageSize = 0;
int* idArr;
std::string* nameArr;
unsigned int* countArr;
double* priceArr;

bool staticStorageCreated = false;

void CreateStorage();
void ShowStorage(int mode = 0);
void AddStorageItem();
void RemoveStorageItem();
void ChangePrice();

template<typename T>
void SwapArr(T* Arr, T* Arr2, size_t SizeArr);

void ChangeStorage();
void AddNewItem();



//-----------Служебки------------

void Start();
bool Login();
inline void Getline(std::string& str);
inline void Err();
bool IsNumber(const std::string& str);

void ShowSuperAdminMenu();

// ------------------------------

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

//template<typename T, typename L>
//L Sum(T first, L second)
//{
//	return (L)(first + second);
//}

//void umnosh(int num1, int num2, int t, int result)
//{
//	if (t == num2)
//	{
//		std::cout << "Результат: " << result;
//	}
//	else
//	{
//		result = result + num1;
//		t++;
//		umnosh(num1, num2, t, result);
//	}
//}

// Магазин
/*

void ShowMenu(float total);

float ChooseBuy(int choose, float total);
float Frukt(int choose, float total);
float Ovosh(int choose, float total);
float chai(int choose, float total);

float Discount(float total);
void FinalBuy(float total, int choose);
*/


//void MakeMore(int *num)
//{
//	*num += 2;
//}
//
//void MakeM(int &num)
//{
//	num += 3;
//}
//
//
//void MySwap(int &a, int &b)
//{
//	int t = a;
//	a = b;
//	b = t;
//}

//void RandomArr(int *&data, int &newSize, int &num)
//{
//	for (int i = 0; i < newSize; i++)
//	{
//		data[i] = rand() % 10 + 1;
//		std::cout << data[i] << " ";
//	}
//	std::cout << "\n";
//
//	int* newData = new int[newSize];
//
//	for (int i = 0; i < newSize; i++)
//	{
//		newData[i] = data[i];
//	}
//
//	delete[]data;
//
//	newSize++;
//	data = new int[newSize];
//
//	data[newSize - 1] = num;
//
//	for (int i = 0; i < newSize - 1; i++)
//	{
//		data[i] = newData[i];
//	}
//
//	for (int i = 0; i < newSize; i++)
//	{
//		std::cout << data[i] << " ";
//	}
//	delete[]newData;
//}







int main()
{
	//setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	
	Start();
	delete[]loginArr, passArr, statusArr;

	if (staticStorageCreated)
	{
		delete[]idArr, nameArr, countArr, priceArr;
	}










	/*int newSize = 5, num;
	int* data = new int[newSize];

	std::cout << "Введите число:\n";
	std::cin >> num;

	RandomArr(data, newSize, num);


	delete[]data;*/

	/*int* data = new int;

	*data = 100;
	std::cout << *data << "\n";
	delete data;

	data = new int;
	*data = 1000;
	std::cout << *data << "\n";
	delete data;

	int newSize = 0;
	std::cin >> newSize;
	data = new int[newSize];

	delete[]data;*/

	/*short arr[5]{};
	RandomArr(arr);*/

	/*int arr[]{ 1, 2, 3, 4, 5 };

	std::cout << *arr << "\n";
	std::cout << *(arr + 1) << "\n";*/

	/*int a = 10;
	int b = 20;


	std::cout << a << " " << b << "\n";
	MySwap(a, b);
	std::cout << a << " " << b << "\n";*/

	/*
	std::cout << &a << "\n";
	std::cout << a << "\n";
	std::cout << ptr << "\n";
	std::cout << &ptr << "\n";
	std::cout << *ptr << "\n";
	*/

	// Магазин
	/*
	int choose = 0;
	float total = 0;

	ShowMenu(total);
	total = ChooseBuy(choose, total);
	FinalBuy(total, choose);
	*/


	/*int num1 = 6, num2 = 8;
	int t = 0, result = 0;
	std::cout << "Введите первое число: ";
	std::cin >> num1;
	std::cout << "Введите второе число: ";
	std::cin >> num2;
	umnosh(num1, num2, t, result);*/

	/*int mass1[5]{};
	SetArray(mass1);

	char mass2[5]{};
	SetArray(mass2);

	bool mass3[5]{};
	SetArray(mass3);*/

	/*int const size = 5;
	int arr1[size]{1, 2, 3, 4, 5}, arr2[size]{5, 4, 3, 2, 1};

	std::cout << "\n\tМассив ДО: \n\t";
	pechat(arr1, arr2, size);
	std::cout << "\n\tМассив ПОСЛЕ: \n\t";
	change(arr1, arr2, size);
	pechat(arr1, arr2, size);*/

	/*float num1, num2;
	int choose;
	std::cout << "\n\tВведите число 1: ";
	std::cin >> num1;
	std::cout << "\n\tВведите число 2: ";
	std::cin >> num2;
	while (true)
	{
		std::cout << "\n\tВыберите действие(цифру): \n\t1. Плюс \n\t2. Минус \n\t3. Делить \n\t4. Умножить\n\t";
		std::cin >> choose;
		if (choose < 1 || choose > 4)
		{
			std::cout << "\n\tНорм введи\n\t";
		}
		else
		{
			break;
		}
	}
	if (choose == 1)
	{
		std::cout << "\n\tРезультат: " << Plus(num1, num2);
	}
	else if (choose == 2)
	{
		std::cout << "\n\tРезультат: " << Minus(num1, num2);
	}
	else if (choose == 3)
	{
		while (true)
		{
			if (num2 == 0)
			{
				std::cout << "\n\tВторое число не должно быть 0, введи другое значение: \n\t";
				std::cin >> num2;
			}
			else
			{
				break;
			}
		}
		std::cout << "\n\tРезультат: " << Del(num1, num2);
	}
	else if (choose == 4)
	{
		std::cout << "\n\tРезультат: " << Um(num1, num2);
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


/// Магазин
/*

void ShowMenu(float total)
{
	std::cout << "\n\tДобропожаловать в каталог" << "\n\t1. Фруктовые"
		<< "\n\t2. Овощные\n\t3. Чаи\n\t" << "\n\n\tСумма ваших покупок на данный момент: " << total
		<< "\n\t4. Завершить покупки, перейти к оплате.";
}

float ChooseBuy(int choose, float total)
{
	while (true)
	{
		std::cout << "\n\tВыберете категорию:\n\t";
		std::cin >> choose;
		if (choose == 1)
		{
			system("cls");
			total = Frukt(choose, total);
		}
		else if (choose == 2)
		{
			system("cls");
			total = Ovosh(choose, total);
		}
		else if (choose == 3)
		{
			system("cls");
			total = chai(choose, total);
		}
		else if (choose == 4)
		{
			system("cls");
			return total;
		}
		else
		{
			std::cout << "\n\tВведите норм категорию да\n\t";
			system("pause");
			system("cls");
			ShowMenu(total);
		}
	}
}

float Frukt(int choose, float total)
{
	int kf;
	system("cls");
	while (true)
	{
		std::cout << "\n\tКатегория фруктовых. Выберете товар:\n\t1. Яблочный - 500р"
			<< "\n\t2. Апельсиновый - 600р\n\t3. Абрикосовый - 700р"
			<< "\n\t4. Грушевый - 800р\n\t\n\t5.Выйти, показать меню\n\t"
			<< "\n\tВсе цены указываются за ЛИТР!!!1!\n\tВведите номер товара:\n\t";
		std::cin >> choose;
		if (choose == 1)
		{
			std::cout << "\n\tВведите кол-во литров: ";
			std::cin >> kf;
			total = total + 500 * kf;
			std::cout << "\n\tУспешно Добавлено.\n\tСумма ваших покупок на данный момент: " << total << "\n\t";
			system("pause");
			system("cls");
		}
		else if (choose == 2)
		{
			std::cout << "\n\tВведите кол-во литров: ";
			std::cin >> kf;
			total = total + 600 * kf;
			std::cout << "\n\tУспешно Добавлено.\n\tСумма ваших покупок на данный момент: " << total << "\n\t";
			system("pause");
			system("cls");
		}
		else if (choose == 3)
		{
			std::cout << "\n\tВведите кол-во литров: ";
			std::cin >> kf;
			total = total + 700 * kf;
			std::cout << "\n\tУспешно Добавлено.\n\tСумма ваших покупок на данный момент: " << total << "\n\t";
			system("pause");
			system("cls");
		}
		else if (choose == 4)
		{
			std::cout << "\n\tВведите кол-во литров: ";
			std::cin >> kf;
			total = total + 800 * kf;
			std::cout << "\n\tУспешно Добавлено.\n\tСумма ваших покупок на данный момент: " << total << "\n\t";
			system("pause");
			system("cls");
		}
		else if (choose == 5)
		{
			system("cls");
			ShowMenu(total);
			return total;
		}
		else
		{
			std::cout << "\n\tВведите норм товар да\n\t";
			system("pause");
			system("cls");
		}
	}
}

float Ovosh(int choose, float total)
{
	int kf;
	system("cls");
	while (true)
	{
		std::cout << "\n\tКатегория Овощных. Выберете товар:\n\t1. Томатный - 500р"
			<< "\n\t2. Луковый - 600р\n\t3. Огуречный - 700р"
			<< "\n\t4. Выйти, показать меню\n\t"
			<< "\n\tВсе цены указываются за ЛИТР!!!1!\n\tВведите номер товара:\n\t";
		std::cin >> choose;
		if (choose == 1)
		{
			std::cout << "\n\tВведите кол-во литров: ";
			std::cin >> kf;
			total = total + 500 * kf;
			std::cout << "\n\tУспешно Добавлено.\n\tСумма ваших покупок на данный момент: " << total << "\n\t";
			system("pause");
			system("cls");
		}
		else if (choose == 2)
		{
			std::cout << "\n\tВведите кол-во литров: ";
			std::cin >> kf;

			if (kf % 4 == 0)
			{
				int sale = kf / 4;
				total = (total + 600 * kf) - 600 * sale;
			}
			else
			{
				total = total + 600 * kf;
			}
			std::cout << "\n\tУспешно Добавлено.\n\tСумма ваших покупок на данный момент: " << total << "\n\t";
			system("pause");
			system("cls");
		}
		else if (choose == 3)
		{
			std::cout << "\n\tВведите кол-во литров: ";
			std::cin >> kf;
			total = total + 700 * kf;
			std::cout << "\n\tУспешно Добавлено.\n\tСумма ваших покупок на данный момент: " << total << "\n\t";
			system("pause");
			system("cls");
		}
		else if (choose == 4)
		{
			system("cls");
			ShowMenu(total);
			return total;
		}
		else
		{
			std::cout << "\n\tВведите норм товар да\n\t";
			system("pause");
			system("cls");
		}
	}
}

float chai(int choose, float total)
{
	int kf;
	bool sale;
	system("cls");
	while (true)
	{
		std::cout << "\n\tКатегория Чаев. Выберете товар:\n\t1. Чесночный - 500р"
			<< "\n\t2. Петрушевый - 600р\n\t"
			<< "\n\t3. Выйти, показать меню\n\t"
			<< "\n\tВсе цены указываются за ЛИТР!!!1!\n\tВведите номер товара:\n\t";
		std::cin >> choose;
		if (choose == 1)
		{
			std::cout << "\n\tВведите кол-во литров: ";
			std::cin >> kf;
			total = total + 500 * kf;
			std::cout << "\n\tУспешно Добавлено.\n\tСумма ваших покупок на данный момент: " << total << "\n\t";
			system("pause");
			system("cls");
		}
		else if (choose == 2)
		{
			std::cout << "\n\tВведите кол-во литров: ";
			std::cin >> kf;
			if (kf >= 3)
			{
				total = (total + 600 * kf) - ((total + 600 * kf) * 0.05);
			}
			else
			{
				total = (total + 600 * kf);
			}
			std::cout << "\n\tУспешно Добавлено.\n\tСумма ваших покупок на данный момент: " << total << "\n\t";
			system("pause");
			system("cls");
		}
		else if (choose == 3)
		{
			system("cls");
			ShowMenu(total);
			return total;
		}
		else
		{
			std::cout << "\n\tВведите норм товар да\n\t";
			system("pause");
			system("cls");
		}
	}
}

float Discount(float total)
{
	if (total > 1500)
	{
		return total = total - (total * 0.13);
	}
	return total;
}

void FinalBuy(float total, int choose)
{
	if (total == 0)
	{
		std::cout << "\n\tВы ничего не выбрали\n\t";
	}
	else
	{
		while (true)
		{
			total = Discount(total);
			std::cout << "\n\tСумма к оплате: " << Discount(total) << " р\n\tОплата картой или наличными?\n\t\n\t1. Картой\n\t2. Наличными\n\t";
			std::cin >> choose;
			if (choose == 1)
			{
				std::cout << "\n\tПриложите карту\n\t";
				system("pause");
				std::cout << "\n\tОплата прошла.";
				break;
			}
			else if (choose == 2)
			{
				float money;
				std::cout << "\n\tВведите кол-во наличных\n\t";
				std::cin >> money;
				if (money < total)
				{
					while (money < total)
					{
						float DopMoney;
						system("cls");
						std::cout << "\n\tВам не хватает " << total - money << " р, добавьте еще : \n\t"
							<< "\n\tСколько хотите добавить?\n\t";
						std::cin >> DopMoney;
						money = DopMoney + money;
					}
				}
				std::cout << "\n\tВаша сдача: " << money - total;
				break;
			}
			else
			{
				std::cout << "\n\tНорм введи да\n\t";
				system("pause");
				system("cls");
			}
		}
	}
}
*/

void CreateStorage()
{
	const int staticSize = 10;
	int id[staticSize]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	std::string name[staticSize]
	{
		"RTX 5060", "RTX 5070", "RTX 5080", "RTX 5090 ti",
		"Iphone 14", "Iphone 15", "Iphone 16",
		"Xiaomi UltraMegaMaxSuper 3000", "NE Xiaomi NeSuper", "Xiaomi Super 15"
	};
	unsigned int count[staticSize]{ 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	double price[staticSize]{ 30000.5, 60000.5, 100000.5, 300000.5, 50000.5, 80000.5, 90000.5, 22222.5, 500.5, 30000.5 };

	storageSize = staticSize;
	idArr = new int[storageSize];
	nameArr = new std::string[storageSize];
	countArr = new unsigned int[storageSize];
	priceArr = new double[storageSize];
	staticStorageCreated = true;

	SwapArr(idArr, id, storageSize);
	SwapArr(priceArr, price, storageSize);
	SwapArr(countArr, count, storageSize);
	SwapArr(nameArr, name, storageSize);

}

void ShowStorage(int mode)
{
	system("cls");
	if (mode == 0)
	{
		std::cout << "ID\t" << std::left << std::setw(25) << "Название товара\t\t" <<
			"Цена\t" << "Кол-во\n";

		for (size_t i = 0; i < storageSize; i++)
		{
			std::cout << idArr[i] << "\t" << std::left << std::setw(25) << nameArr[i]
				<< "\t" << priceArr[i] << "\t" << countArr[i] << "\n";
		}
		system("pause");
		system("cls");
	}
	else if (mode == 1)
	{
		std::cout << "ID\t" << std::left << std::setw(25) << "Название товара\t\t" << "Кол-во\n";

		for (size_t i = 0; i < storageSize; i++)
		{
			std::cout << idArr[i] << "\t" << std::left << std::setw(25) << nameArr[i]
				<< "\t" << countArr[i] << "\n";
		}
		
	}
	else if (mode == 2)
	{
		std::cout << "ID\t" << std::left << std::setw(25) << "Название товара\t\t" <<
			"Цена\n";

		for (size_t i = 0; i < storageSize; i++)
		{
			std::cout << idArr[i] << "\t" << std::left << std::setw(25) << nameArr[i]
				<< "\t" << priceArr[i] << "\n";
		}
		
	}
	else
	{
		std::invalid_argument("StorageMode Error");
	}
	std::cout << "\n\n";
}

void AddStorageItem()
{
	std::string chooseId, chooseCount, choose;
	int id = 0;
	unsigned int count = 0;
	while (true)
	{
		system("cls");
		ShowStorage(1);

		std::cout << "\n\tВведите ID товара для его пополнения: ";
		Getline(chooseId);

		if (chooseId == "exit")
		{
			std::cout << "Отмена операции пополнения\n";
			Sleep(1500);
			break;
		}

		std::cout << "\n\tВведите кол-во товара для пополнения: ";
		Getline(chooseCount);

		if (IsNumber(chooseId) && IsNumber(chooseCount))
		{
			id = std::stoi(chooseId) - 1;
			count = std::stoi(chooseCount);

			if (id < 0 || id > storageSize - 1 || count < 0 || count > 50)
			{
				std::cout << "\n\n\tНекорректный ID\n\n";
				Sleep(1500);

			}
			else
			{
				std::cout << std::left << std::setw(25) << nameArr[id] <<
					"\t" << countArr[id] << " --> " << countArr[id] + count << "\n\n";

				std::cout << "Подтвердить?\n1. Да\n\t2. НЕТ\nВвод: ";
				Getline(choose);
				if (choose == "1")
				{
					countArr[id] += count;
					std::cout << "Товар успешно пополнен\n\n";
					Sleep(1500);
					system("cls");
					break;
				}
				else if (choose == "2")
				{
					std::cout << "Отмена пополнения товара\n";
					Sleep(1500);
				}
				else
				{
					Err();
				}
			}
		}
	}
}

void RemoveStorageItem()
{
	std::string chooseId, chooseCount, choose;
	int id = 0;
	unsigned int count = 0;
	while (true)
	{
		system("cls");
		ShowStorage(1);

		std::cout << "\n\tВведите ID товара для его списания: ";
		Getline(chooseId);

		if (chooseId == "exit")
		{
			std::cout << "Отмена операции списания\n";
			Sleep(1500);
			system("cls");
			break;
		}

		std::cout << "\n\tВведите кол-во товара для списания: ";
		Getline(chooseCount);

		if (IsNumber(chooseId) && IsNumber(chooseCount))
		{
			id = std::stoi(chooseId) - 1;
			count = std::stoi(chooseCount);

			if (id < 0 || id > storageSize - 1 || count < 0 || count > countArr[id])
			{
				std::cout << "\n\n\tНекорректный ID\n\n";
				Sleep(1500);

			}
			else
			{
				std::cout << std::left << std::setw(25) << nameArr[id] <<
					"\t" << countArr[id] << " --> " << countArr[id] - count << "\n\n";

				std::cout << "Подтвердить?\n1. Да\n\t2. НЕТ\nВвод: ";
				Getline(choose);
				if (choose == "1")
				{
					countArr[id] -= count;
					std::cout << "Товар успешно списан\n\n";
					Sleep(1500);
					system("cls");
					break;
				}
				else if (choose == "2")
				{
					std::cout << "Отмена пополнения товара\n";
					Sleep(1500);
				}
				else
				{
					Err();
				}
			}
		}
	}
}

void ChangePrice()
{
	std::string chooseId, newPrice, choose;
	int id = 0;
	double price = 0.0;
	while (true)
	{
		system("cls");
		ShowStorage(2);

		std::cout << "\n\tВведите ID товара для его смены цены: ";
		Getline(chooseId);

		if (chooseId == "exit")
		{
			std::cout << "Отмена операции смены цены\n";
			Sleep(1500);
			break;
		}

		std::cout << "\n\tВведите новую цену товара: ";
		Getline(newPrice);

		if (IsNumber(chooseId) && IsNumber(newPrice))
		{
			id = std::stoi(chooseId) - 1;
			price = std::stoi(newPrice);

			if (id < 0 || id > storageSize - 1 || price < 0.0 || price > 700000)
			{
				std::cout << "\n\n\tНекорректный ID или цена\n\n";
				Sleep(1500);

			}
			else
			{
				std::cout << std::left << std::setw(25) << nameArr[id] <<
					"\t" << priceArr[id] << " --> " << price << "\n\n";

				std::cout << "Подтвердить?\n\t1. Да\n\t2. НЕТ\n\tВвод: ";
				Getline(choose);
				if (choose == "1")
				{
					priceArr[id] = price;
					std::cout << "Цена товара успешно изменена\n\n";
					Sleep(1500);
					system("cls");
					break;
				}
				else if (choose == "2")
				{
					std::cout << "Отмена смены цены товара\n";
					Sleep(1500);
				}
				else
				{
					Err();
				}
			}
		}
	}
}

void ChangeStorage()
{
	std::cout << "\n\tChange Storage MENUUUU";
	std::string choose;
	while (true)
	{
		system("cls");
		std::cout << "\n\t1. Добавить новый товар\n\t2. Изменить имя товара\n\t3. Удалить товар\n\t4. Выйти из редактора\n\t";
		std::cout << "Ввод: ";
		Getline(choose);

		if (choose == "1")
		{
			AddNewItem();
		}
		else if (choose == "2")
		{

		}
		else if (choose == "3")
		{

		}
		else if (choose == "4")
		{

		}
		else
		{
			Err();
		}
	}
}

void AddNewItem()
{
	std::string newName, newPrice, newCount, choose;
	double price = 0.0;
	unsigned int count = 0;
	bool exit = true;
	while (true)
	{
		while (true)
		{
			system("cls");
			std::cout << "\tДобавление нового товара\n\tВведите \"exit\" для выхода";
			std::cout << "\n\tВведите название нового товара: ";
			Getline(newName);
			if (newName == "exit")
			{
				std::cout << "Операция добавления прервана";
				Sleep(1500);
				exit = false;
				break;
			}

			if (newName.size() <= 0 || newName.size() >= 100)
			{
				std::cout << "Ошибка имени, слишком длинное название";
				Sleep(1500);
			}
			else
			{
				break;
			}
		}
		while (exit)
		{
			system("cls");
			std::cout << "\tДобавление нового товара\n\tВведите \"exit\" для выхода";
			std::cout << "\n\tВведите кол-во нового товара: ";
			Getline(newCount);
			if (newName == "exit")
			{
				std::cout << "Операция добавления прервана";
				Sleep(1500);
				exit = false;
				break;
			}

			if (IsNumber(newCount))
			{
				count = std::stoi(newCount);
				if (count > 100)
				{
					std::cout << "\n\tСлишком много, не более 100 ед.\n\t";
				}
				else
				{
					break;
				}
			}
		}
		while (exit)
		{
			system("cls");
			std::cout << "\tДобавление нового товара\n\tВведите \"exit\" для выхода";
			std::cout << "\n\tВведите цену нового товара: ";
			Getline(newPrice);
			if (newName == "exit")
			{
				std::cout << "Операция добавления прервана";
				Sleep(1500);
				exit = false;
				break;
			}

			if (IsNumber(newPrice))
			{
				price = std::stoi(newPrice);
				if (price > 100000000)
				{
					std::cout << "\n\tСлишком дорого, не более 1 млн.\n\t";
					Sleep(1500);
				}
				else
				{
					break;
				}
			}
		}

		system("pause");

		while (exit)
		{
			std::cout << "\n\tНовар товар:" << newName << "\n\tЦена: " << price << "\n\tКоличество: " << count;
			std::cout << "\n\tПодтвердить???\n\t1. ДА\n\t2. НЕТ\n\tВвод: ";
			Getline(choose);
			if (choose == "1")
			{
				storageSize++;

				int* idArrTemp = new int [storageSize];
				std::string* nameArrTemp = new std::string[storageSize];
				unsigned int* countArrTemp = new unsigned int[storageSize];
				double* priceArrTemp = new double[storageSize];

				SwapArr(idArrTemp, idArr, storageSize - 1);
				SwapArr(nameArrTemp, nameArr, storageSize - 1);
				SwapArr(countArrTemp, countArr, storageSize - 1);
				SwapArr(priceArrTemp, priceArr, storageSize - 1);

				idArrTemp[storageSize - 1] = storageSize;
				nameArrTemp[storageSize - 1] = newName;
				countArrTemp[storageSize - 1] = count;
				priceArrTemp[storageSize - 1] = price;

				std::swap(idArr, idArrTemp);
				std::swap(nameArr, nameArrTemp);
				std::swap(countArr, countArrTemp);
				std::swap(priceArr, priceArrTemp);

				delete[]idArrTemp, nameArrTemp, countArrTemp, priceArrTemp;
			}
			else if (choose == "2")
			{
				std::cout << "\n\tОтмена";
				Sleep(1500);
				system("cls");
			}
			else
			{
				Err();
			}
		}

		if (exit == false)
		{
			break;
		}
	}
}

template<typename T>
void SwapArr(T *Arr, T *Arr2, size_t SizeArr)
{
	for (int i = 0; i < SizeArr; i++)
	{
		Arr[i] = Arr2[i];
	}
}


void Start()
{
	std::string choose;
	std::cout << "\n\n\n\t\t\tТехноШоооб\n\n\n\n\n\n";
	if (Login())
	{
		if (currentStatus == userStatus[0])
		{
			while (true)
			{
				std::cout << "Выберете склад: \n1. Готовый\n2. Создать новый" << "\nВвод: ";
				Getline(choose);
				if (choose == "1")
				{
					CreateStorage();
					system("cls");
					//ShowStorage();
					ShowSuperAdminMenu();
					//system("pause");
					break;
				}
				else if (choose == "2")
				{
					break;
				}
				else
				{
					Err();
				}
			}
			
		}
		else if (currentStatus == userStatus[1])
		{

		}
		else if (currentStatus == userStatus[2])
		{

		}
	}
	else
	{
		system("cls");
		Sleep(1500);
		std::cout << "\n\tЗавершение работы магазина";
	}
}

bool Login()
{
	std::string login, pass;
	while (true)
	{
		std::cout << "Введите логин - ";
		Getline(login);
		std::cout << "Введите пароль - ";
		Getline(pass);
		if (login == "exit" && pass == "exit")
		{
			currentStatus = "";
			return false;
		}

		for (size_t i = 0; i < userSize; i++)
		{
			if (login == loginArr[i] && pass == passArr[i])
			{
				system("cls");
				std::cout << "Пользователь - " << loginArr[i] << "\n\nДобро Пожаловать\n";
				std::cout << "Ваш статус - " << statusArr[i] << "\n\n";
				currentStatus = statusArr[i];
				return true;
			}
		}
		Err();
	}
	return false;
}

inline void Getline(std::string& str)
{
	std::getline(std::cin, str, '\n');
}

inline void Err()
{
	std::cout << "Некорректный ввод\n";
	Sleep(1500);
	system("cls");
}

bool IsNumber(const std::string& str)
{
	if (str.size() <= 0 || str.size() >= 10)
	{
		std::cout << "\n\tНекорректный ввод";
		std::cout << "\n\tНекорректная длина числа\n\n";
		Sleep(1500);
		return false;
	}
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!std::isdigit(str[i]))
		{
			Err();
			std::cout << "Не является числом\n\n";
			return false;
		}
		return true;
	}
}

void ShowSuperAdminMenu()
{
	std::cout << "\n\tSuper MENUUUU";
	std::string choose;
	while (true)
	{
		system("cls");
		std::cout << "\n\t1. Начать продажу\n\t2. Показать склад\n\t3. Пополнить склад\n\t4. Списание товара"
		<< "\n\t5. Изменить цену\n\t6. Редакт. склад\n\t7. Редакт. персонал\n\t8. Отчет о прибыли\n\t9. Закрыть смену\n\t";
		std::cout << "Ввод: ";
		Getline(choose);

		if (choose == "1")
		{

		}
		else if (choose == "2")
		{
			ShowStorage();
		}
		else if (choose == "3")
		{
			AddStorageItem();
		}
		else if (choose == "4")
		{
			RemoveStorageItem();
		}
		else if (choose == "5")
		{
			ChangePrice();
		}
		else if (choose == "6")
		{
			ChangeStorage();
		}
		else if (choose == "7")
		{

		}
		else if (choose == "8")
		{

		}
		else if (choose == "9")
		{

		}
		else
		{
			Err();
		}
	}
}

