
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
	cout<<"\t\t\t������� ���������"<<endl;
	cout<<"\t\t\t����� ����������!"<<endl<<endl;
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
	cout<<"\t\t\t������� ����� � ������ ��������"<<endl;
	cout<<"\t\t\t";
	cin>>firm;
	toFullFill.firm = new char[20];
	strcpy(toFullFill.firm, firm);
	cout<<"\t\t\t";
	cin>>model;
	toFullFill.model = new char[20];
	strcpy(toFullFill.model, model);
	cout<<"\t\t\t\������� ���� � ������� � ��������(1/0)"<<endl;
	cout<<"\t\t\t";
	cin>>prise;
	toFullFill.prise = prise;
	cout<<"\t\t\t";
	cin>>inShop;
	toFullFill.inShop = inShop;
	cout<<"\t\t\t\������� ���������� ������� ����� ��������"<<endl;
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
		cout<<"\t\t\t������� �����: ";
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
				cout<<"\t\t\t������� �����: ";
				cin>>choice2;
				switch(choice2)
				{
				case 1:
					cout<<"\t\t\t������� �����:"<<endl;
					cout<<"\t\t\t";
					cin>>firm;
					LaptopCopied3.set_firm(firm);
					break;
				case 2:
					cout<<"\t\t\t�������� ������ �������� �����?(1/0):"<<endl;
					cout<<"\t\t\t";
					cin>>choice_set;
					if(choice_set == 1)
					{
					cout<<"\t\t\t������� ������:"<<endl;
					cout<<"\t\t\t";
					cin>>model;
					LaptopCopied3.set_model(model);
					}
					else
					{
					cout<<"\t\t\t������� ������:"<<endl;
					cout<<"\t\t\t";
					cin>>modelInt;
					LaptopCopied3.set_model(modelInt);
					}
					break;
				case 3:
					cout<<"\t\t\t������� ����:"<<endl;
					cout<<"\t\t\t";
					cin>>prise;
					LaptopCopied3.set_prise(prise);
					break;
				case 4:
					cout<<"\t\t\t������� �������(1/0):"<<endl;
					cout<<"\t\t\t";
					cin>>inShop;
					LaptopCopied3.set_inShop(inShop);
					break;
				case 5:
					cout<<"\t\t\t������� ���������� �������:"<<endl;
					cout<<"\t\t\t";
					cin>>ArraySize;
					ArrayOfNumbers = ToFillArrayOfNumbers(ArraySize);
					LaptopCopied3.set_ArrayOfNumbers(ArrayOfNumbers);
					LaptopCopied3.set_ArraySize(ArraySize);
					break;
				case 6:
					cout<<"\t\t\t������� �����:"<<endl;
					cout<<"\t\t\t";
					cin>>firm;
					cout<<"\t\t\t������� ������:"<<endl;
					cout<<"\t\t\t";
					cin>>model;
					cout<<"\t\t\t������� ����:"<<endl;
					cout<<"\t\t\t";
					cin>>prise;
					cout<<"\t\t\t������� �������(1/0):"<<endl;
					cout<<"\t\t\t";
					cin>>inShop;
					cout<<"\t\t\t������� ���������� �������:"<<endl;
					cout<<"\t\t\t";
					cin>>ArraySize;
					ArrayOfNumbers = ToFillArrayOfNumbers(ArraySize);
					LaptopCopied2.set(firm, model, prise, inShop, ArrayOfNumbers, ArraySize);
					break;
				case 7:
					++LaptopCopied3;
					cout<<"\t\t\t";
					cout<<"�������� ���� ��������� �� ������"<<endl;
					system("pause");
					break;
				case 8:
					LaptopCopied3++;
					cout<<"\t\t\t";
					cout<<"�������� ���� ��������� �� ������"<<endl;
					system("pause");
					break;
				case 9:
					LaptopCopied3--;
					cout<<"\t\t\t";
					cout<<"�������� ���� ��������� �� ������"<<endl;
					system("pause");
					break;
				case 10:
					-LaptopCopied3;
					cout<<"\t\t\t";
					cout<<"�������� ���� �������� �� �������������"<<endl;
					system("pause");
					break;
				case 11:
					LaptopCopied1 = LaptopCopied3;
					cout<<"\t\t\t";
					cout<<"��� ������ ����������."<<endl;
					system("pause");
					break;
				case 12:
					cout<<"\t\t\t";
					cout<<"������� �������� ����� ��� ������: "<<endl;
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
						cout<<"������� �����: ";
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
							cout<<"�������� �����."<<endl;
							system("pause");
						}
					}while(choice4 != 0);
					delete(oneLaptopPtr);
					delete[](manyLaptopsPtr);
					break;
				case 0:
					break;
				default:
					cout<<"\t\t\t�������� �����"<<endl;
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
				cout<<"������� �����: ";
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
					cout<<"������� ����� � �������"<<endl;
					cout<<"\t\t\t";
					cin>>i;
					cout<<"\t\t\t";
					cout<<"������� ����� ������ "<<LaptopCopied3[i - 1]<<endl; 
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
					cout<<"����� ������� ������� "<<+LaptopCopied3<<endl; 
					system("pause");
					break;
					break;
				case 0:
					break;
				default:
					cout<<"\t\t\t";
					cout<<"\t\t\t�������� �����"<<endl;
					system("pause");
				}
			}while(choice3 != 0);
			break;
		case 0:
			break;
		default:
			cout<<"\t\t\t";
			cout<<"\t\t\t�������� �����"<<endl;
			system("pause");
		}
	}while(choice1 != 0);
	return 1;
}

void instructions1(void)
{
	cout<<"\t\t\t �������� ��������"<<endl;
	cout<<"\t\t\t 1.�������� ������ "<<endl;
	cout<<"\t\t\t 2.�������� ������"<<endl;
	cout<<"\t\t\t 0.�����"<<endl;
}

void instructions2(void)
{
	cout<<"\t\t\t ��������� ������"<<endl;
	cout<<"\t\t\t 1.�������� ����� ��������"<<endl;
	cout<<"\t\t\t 2.�������� ������ ��������"<<endl;
	cout<<"\t\t\t 3.�������� ���� ��������"<<endl;
	cout<<"\t\t\t 4.�������� ������� ��������"<<endl;
	cout<<"\t\t\t 5.�������� ������ ������� �������� � ���������� �������"<<endl;
	cout<<"\t\t\t 6.�������� ��� ������"<<endl;
	cout<<"\t\t\t 7.�������� ���� �������� �� 10(�������� �������� ++a)"<<endl;
	cout<<"\t\t\t 8.�������� ���� �������� �� 10(�������� �������� a++)"<<endl;
	cout<<"\t\t\t 9.�������� ���� �������� �� 10(�������� �������� a--)"<<endl;
	cout<<"\t\t\t 10.�������� ���� �������� �� �������������"<<endl;
	cout<<"\t\t\t (�������� �������� -�)"<<endl;
	cout<<"\t\t\t 11.���������� ������ �� ������ ������� � ������"<<endl;
	cout<<"\t\t\t (�������� �������� =)"<<endl;
	cout<<"\t\t\t 12.���������� �������� �����(�������� �������� =)"<<endl;
	cout<<"\t\t\t 13.������� ������/��������� �������"<<endl;
	cout<<"\t\t\t 0.����� � ������� ����"<<endl;
}

void instructions3(void)
{
	cout<<"\t\t\t ����� ������"<<endl;
	cout<<"\t\t\t 1.�������� ����� ��������"<<endl;
	cout<<"\t\t\t 2.�������� ������ ��������"<<endl;
	cout<<"\t\t\t 3.�������� ���� ��������"<<endl;
	cout<<"\t\t\t 4.�������� ������� ��������"<<endl;
	cout<<"\t\t\t 5.�������� ������ ������� �������� � ���������� �������"<<endl;
	cout<<"\t\t\t 6.�������� ������������ ����� ������"<<endl;                    
	cout<<"\t\t\t 7.������� ��� ������"<<endl;
	cout<<"\t\t\t 8.������� ��� ������������ ������ � ��������"<<endl;
	cout<<"\t\t\t 9.������� ����� �������"<<endl;
	cout<<"\t\t\t 0.����� � ������� ����"<<endl;
}

void instructions4()
{
	cout<<"\t\t\t ������ � ��������"<<endl;
	cout<<"\t\t\t 1.�������������� ���"<<endl;
	cout<<"\t\t\t 2.������ ������ � ������"<<endl;
	cout<<"\t\t\t (�������� ������������� cin)"<<endl;
	cout<<"\t\t\t 3.������� ������ � �������"<<endl;
	cout<<"\t\t\t (�������� ������������� cout)"<<endl;
}

int* ToFillArrayOfNumbers(int ArraySize)
{
	int* newArrayOfNumbers = new int[ArraySize];
	cout<<"\t\t\t������� ������ ������� ����� ��������: "<<endl;
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
	cout<<"���������� new ���������"<<endl;
	system("pause");
	return new char[type];
}

void operator delete[](void* ptr)
{
	cout<<"���������� delete[] ���������"<<endl;
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
			out<<"������ ���������:"<<endl;
			for(int i = 0; i < obj.ArraySize; i++)
				out<<i + 1<<". "<<obj[i]<<endl;
		}
	}
	else out<<"������ ��������, ���� �� ���������."<<endl;
    return out;
}