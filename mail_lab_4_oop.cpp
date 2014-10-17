
#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "class_4_lab_oop.h"
#include <iostream>

using namespace std;

good CopyFunc(good );
good CopyFunc(good );
int* ToFillArrayOfNumbers(int );
void instructions1(void);
void instructions2(void);
void instructions3(void);
good operator ++(good &, int);
int* CopyArray(int* , int );
void* operator new(size_t );
ostream& operator<<(ostream& , good& );

int main()
{
	setlocale(LC_ALL, "Russian");
	cout<<"\t\t\tМАГАЗИН НОУТБУКОВ"<<endl;
	cout<<"\t\t\tДобро пожаловать!"<<endl<<endl;
	good LaptopEmpty();
	system("pause");
	char* firm = new char[50];
	char* model = new char[50];
	int modelInt = 0;
	int prise = 0;
	int inShop = 0;
	int ArraySize = 0;
	int* ArrayOfNumbers = new int[50];
	struct All toFullFill ;
	good* oneLaptopPtr = NULL;
	good* manyLaptopsPtr = NULL;
	cout<<"\t\t\tВведите фирму и модель ноутбука"<<endl;
	cout<<"\t\t\t";
	cin>>firm;
	toFullFill.firm = new char[20];
	strcpy(toFullFill.firm, firm);
	cout<<"\t\t\t";
	cin>>model;
	toFullFill.model = new char[20];
	strcpy(toFullFill.model, model);
	cout<<"\t\t\t\Введите цену и наличие в магазине(1/0)"<<endl;
	cout<<"\t\t\t";
	cin>>prise;
	toFullFill.prise = prise;
	cout<<"\t\t\t";
	cin>>inShop;
	toFullFill.inShop = inShop;
	cout<<"\t\t\t\Введите количество заказов этого ноутбука"<<endl;
	cout<<"\t\t\t";
	cin>>ArraySize;
	toFullFill.ArraySize = ArraySize;
	ArrayOfNumbers = ToFillArrayOfNumbers(ArraySize);
	toFullFill.ArrayOfNumbers = CopyArray(ArrayOfNumbers, ArraySize);
	good LaptopFilled(firm, model, prise, inShop, ArrayOfNumbers, ArraySize);
	system("pause");

	good LaptopCopied1(LaptopFilled);
	system("pause");
	good LaptopCopied2 = LaptopFilled;
	system("pause");
	good LaptopCopied3 = CopyFunc(LaptopFilled);
	system("pause");
	good LaptopFilledOverloadedFunc(toFullFill);
	system("pause");

	int choice1;
	do
	{
		system("cls");
		instructions1();
		cout<<"\t\t\tВведите выбор: ";
		cin>>choice1;
		int choice_set = 0;
		switch(choice1)
		{
		case 1:
			int choice2;
			do
			{
				system("cls");
				instructions2();
				cout<<"\t\t\tВведите выбор: ";
				cin>>choice2;
				switch(choice2)
				{
				case 1:
					cout<<"\t\t\tВведите фирму:"<<endl;
					cout<<"\t\t\t";
					cin>>firm;
					LaptopCopied3.set_firm(firm);
					break;
				case 2:
					cout<<"\t\t\tНазвание модели содержит буквы?(1/0):"<<endl;
					cout<<"\t\t\t";
					cin>>choice_set;
					if(choice_set == 1)
					{
					cout<<"\t\t\tВведите модель:"<<endl;
					cout<<"\t\t\t";
					cin>>model;
					LaptopCopied3.set_model(model);
					}
					else
					{
					cout<<"\t\t\tВведите модель:"<<endl;
					cout<<"\t\t\t";
					cin>>modelInt;
					LaptopCopied3.set_model(modelInt);
					}
					break;
				case 3:
					cout<<"\t\t\tВведите цену:"<<endl;
					cout<<"\t\t\t";
					cin>>prise;
					LaptopCopied3.set_prise(prise);
					break;
				case 4:
					cout<<"\t\t\tВведите наличие(1/0):"<<endl;
					cout<<"\t\t\t";
					cin>>inShop;
					LaptopCopied3.set_inShop(inShop);
					break;
				case 5:
					cout<<"\t\t\tВведите количество заказов:"<<endl;
					cout<<"\t\t\t";
					cin>>ArraySize;
					ArrayOfNumbers = ToFillArrayOfNumbers(ArraySize);
					LaptopCopied3.set_ArrayOfNumbers(ArrayOfNumbers);
					LaptopCopied3.set_ArraySize(ArraySize);
					break;
				case 6:
					cout<<"\t\t\tВведите фирму:"<<endl;
					cout<<"\t\t\t";
					cin>>firm;
					cout<<"\t\t\tВведите модель:"<<endl;
					cout<<"\t\t\t";
					cin>>model;
					cout<<"\t\t\tВведите цену:"<<endl;
					cout<<"\t\t\t";
					cin>>prise;
					cout<<"\t\t\tВведите наличие(1/0):"<<endl;
					cout<<"\t\t\t";
					cin>>inShop;
					cout<<"\t\t\tВведите количество заказов:"<<endl;
					cout<<"\t\t\t";
					cin>>ArraySize;
					ArrayOfNumbers = ToFillArrayOfNumbers(ArraySize);
					LaptopCopied2.set(firm, model, prise, inShop, ArrayOfNumbers, ArraySize);
					break;
				case 7:
					++LaptopCopied3;
					cout<<"\t\t\t";
					cout<<"Значение цены увеличено на десять"<<endl;
					system("pause");
					break;
				case 8:
					LaptopCopied3++;
					cout<<"\t\t\t";
					cout<<"Значение цены увеличено на десять"<<endl;
					system("pause");
					break;
				case 9:
					LaptopCopied3--;
					cout<<"\t\t\t";
					cout<<"Значение цены уменьшено на десять"<<endl;
					system("pause");
					break;
				case 10:
					-LaptopCopied3;
					cout<<"\t\t\t";
					cout<<"Значение цены изменено на отрицательное"<<endl;
					system("pause");
					break;
				case 11:
					LaptopCopied1 = LaptopCopied3;
					cout<<"\t\t\t";
					cout<<"Все данные переписаны."<<endl;
					system("pause");
					break;
				case 12:
					cout<<"\t\t\t";
					cout<<"Введите название фирмы для записи: "<<endl;
					cout<<"\t\t\t";
					cin>>firm;
					LaptopCopied3 = firm;
					break;
				case 13:
					oneLaptopPtr = new good(LaptopCopied1);
					manyLaptopsPtr = new(3)good[];
					int choice4 = 0;
					do
					{
						system("cls");
						instructions4();
						cout<<"\t\t\t";
						cout<<"Введите выбор: ";
						cin>>choice4;
						switch(choice4)
						{
						case 1:
							break;
						case 2:
							break;
						case 3:
							break;
						case 0:
							break;
						default:
							cout<<"Неверный выбор."<<endl;
							system("pause");
						}
					}while(choice4 != 0);
					delete(oneLaptopPtr);
					delete[](manyLaptopsPtr);
					break;
				case 0:
					break;
				default:
					cout<<"\t\t\tНеверный выбор"<<endl;
					system("pause");
				}
			}while(choice2 != 0);
			break;
		case 2:
			int choice3;
			do
			{
				system("cls");
				instructions3();
				cout<<"\t\t\t";
				cout<<"Введите выбор: ";
				cin>>choice3;
				switch(choice3)
				{
				case 1:
					cout<<"\t\t\t";
					cout<<LaptopCopied3.get_firm()<<endl;
					system("pause");
					break;
				case 2:
					cout<<"\t\t\t";
					cout<<LaptopCopied3.get_model()<<endl;
					system("pause");
					break;
				case 3:
					cout<<"\t\t\t";
					cout<<LaptopCopied3.get_prise()<<endl;
					system("pause");
					break;
				case 4:
					cout<<"\t\t\t";
					cout<<LaptopCopied3.get_inShop()<<endl;
					system("pause");
					break;
				case 5:
					ArrayOfNumbers = LaptopCopied3.get_ArrayOfNumbers();
					ArraySize = LaptopCopied3.get_ArraySize();
					cout<<"\t\t\t";
					for(int i = 0;i < ArraySize; i++)
						cout<<ArrayOfNumbers[i]<<" ";
					cout<<endl;
					cout<<"\t\t\t";
					cout<<ArraySize<<endl;
					system("pause");
					break;
				case 6:
					int i;
					cout<<"\t\t\t";
					cout<<"Введите номер в массиве"<<endl;
					cout<<"\t\t\t";
					cin>>i;
					cout<<"\t\t\t";
					cout<<"Искомый номер заказа "<<LaptopCopied3[i - 1]<<endl; 
					system("pause");
					break;
				case 7:
					LaptopCopied3.showClass();
					system("pause");
					break;
				case 8:
					LaptopCopied1.showClass();
					system("pause");
				case 9:
					cout<<"\t\t\t";
					cout<<"Сумма номеров заказов "<<+LaptopCopied3<<endl; 
					system("pause");
					break;
					break;
				case 0:
					break;
				default:
					cout<<"\t\t\t";
					cout<<"\t\t\tНеверный выбор"<<endl;
					system("pause");
				}
			}while(choice3 != 0);
			break;
		case 0:
			break;
		default:
			cout<<"\t\t\t";
			cout<<"\t\t\tНеверный выбор"<<endl;
			system("pause");
		}
	}while(choice1 != 0);
	return 1;
}

void instructions1(void)
{
	cout<<"\t\t\t Выберите действие"<<endl;
	cout<<"\t\t\t 1.Изменить данные "<<endl;
	cout<<"\t\t\t 2.Показать данные"<<endl;
	cout<<"\t\t\t 0.Выход"<<endl;
}

void instructions2(void)
{
	cout<<"\t\t\t Изменение данных"<<endl;
	cout<<"\t\t\t 1.Изменить фирму ноутбука"<<endl;
	cout<<"\t\t\t 2.Изменить модель ноутбука"<<endl;
	cout<<"\t\t\t 3.Изменить цену ноутбука"<<endl;
	cout<<"\t\t\t 4.Изменить наличие ноутбука"<<endl;
	cout<<"\t\t\t 5.Изменить список заказов ноутбука и количество заказов"<<endl;
	cout<<"\t\t\t 6.Изменить все данные"<<endl;
	cout<<"\t\t\t 7.Изменить цену ноутбука на 10(работает оператор ++a)"<<endl;
	cout<<"\t\t\t 8.Изменить цену ноутбука на 10(работает оператор a++)"<<endl;
	cout<<"\t\t\t 9.Изменить цену ноутбука на 10(работает оператор a--)"<<endl;
	cout<<"\t\t\t 10.Изменить цену ноутбука на отрицательную"<<endl;
	cout<<"\t\t\t (работает оператор -а)"<<endl;
	cout<<"\t\t\t 11.Переписать данные из одного объекта в другой"<<endl;
	cout<<"\t\t\t (работает оператор =)"<<endl;
	cout<<"\t\t\t 12.Переписать название фирмы(работает оператор =)"<<endl;
	cout<<"\t\t\t 13.Создать запись/несколько записей"<<endl;
	cout<<"\t\t\t 0.Выход в главное меню"<<endl;
}

void instructions3(void)
{
	cout<<"\t\t\t Вывод данных"<<endl;
	cout<<"\t\t\t 1.Показать фирму ноутбука"<<endl;
	cout<<"\t\t\t 2.Показать модель ноутбука"<<endl;
	cout<<"\t\t\t 3.Показать цену ноутбука"<<endl;
	cout<<"\t\t\t 4.Показать наличие ноутбука"<<endl;
	cout<<"\t\t\t 5.Показать список заказов ноутбука и количество заказов"<<endl;
	cout<<"\t\t\t 6.Показать определенный номер заказа"<<endl;                    
	cout<<"\t\t\t 7.Вывести все данные"<<endl;
	cout<<"\t\t\t 8.Вывести все переписанные данные о ноутбуке"<<endl;
	cout<<"\t\t\t 9.Вывести сумму массива"<<endl;
	cout<<"\t\t\t 0.Выход в главное меню"<<endl;
}

void instructions4()
{
	cout<<"\t\t\t Работа с записями"<<endl;
	cout<<"\t\t\t 1.Переопределить тип"<<endl;
	cout<<"\t\t\t 2.Ввести данные в записи"<<endl;
	cout<<"\t\t\t (работает перегруженный cin)"<<endl;
	cout<<"\t\t\t 3.Вывести данные о записях"<<endl;
	cout<<"\t\t\t (работает перегруженный cout)"<<endl;
}

int* ToFillArrayOfNumbers(int ArraySize)
{
	int* newArrayOfNumbers = new int[ArraySize];
	cout<<"\t\t\tВведите номера заказов этого ноутбука: "<<endl;
	for(int i = 0; i < ArraySize; i++)
	{
		cout<<"\t\t\t";
		cin>>newArrayOfNumbers[i];
	}
	return newArrayOfNumbers;
}

good CopyFunc(good object)
{
	return object;
}

good operator ++(good &object, int)
{
	object.prise += 10;
	return object;
}

int* CopyArray(int* ArrayOfNumbers, int ArraySize)
{
	int* newArrayOfNumbers = new int[ArraySize];
	for(int i = 0; i < ArraySize; i++)
	{
		newArrayOfNumbers[i] = ArrayOfNumbers[i];
	}
	return newArrayOfNumbers;
}

void* operator new(size_t type)
{
	cout<<"Перегрузка new глобально"<<endl;
	system("pause");
	return new char[type];
}

void operator delete[](void* ptr)
{
	cout<<"Перегрузка delete[] глобально"<<endl;
	system("pause");
	delete [] ptr;
}

ostream& operator<<(ostream& out, good& obj)
{
	if((int)obj.firm * (int)obj.model * (int)obj.prise)
	{
		out<<obj.firm<<" "<<obj.model<<" "<<obj.prise<<" "<<obj.inShop<<endl;
		if(obj.ArraySize)
		{
			out<<"Номера договоров:"<<endl;
			for(int i = 0; i < obj.ArraySize; i++)
				out<<i + 1<<". "<<obj[i]<<endl;
		}
	}
	else out<<"Нечего выводить, поля не заполнены."<<endl;
    return out;
}