
#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "class_4_lab_oop.h"
#include <iostream>

using namespace std;

good :: good()
{
	this->inShop = 0;
	this->prise = 0;
	this->firm = NULL;
	this->model = NULL;
	this->ArrayOfNumbers = NULL;
	this->ArraySize = 0;
	cout<<"\t\t\tРаботает конструктор"<<endl;
}

good :: good(char* firm, char* model, int prise, int inShop, int* ArrayOfNumbers, int ArraySize)
{
	this->firm = new char[strlen(firm) + 1];
	strcpy(this->firm, firm);
	this->model = new char[strlen(model) + 1];
	strcpy(this->model, model);
	this->prise = prise;
	this->inShop = inShop;
	this->ArraySize = ArraySize;
	this->ArrayOfNumbers = new int[ArraySize];
	for(int i = 0; i < this->ArraySize; i++)
		this->ArrayOfNumbers[i] = ArrayOfNumbers[i];
	cout<<"\t\t\tРаботает конструктор"<<endl;
}

good :: good(good &object)
{
	this->firm = new char[strlen(object.firm) + 1];
	strcpy(this->firm, object.firm);
	this->model = new char[strlen(object.model) + 1];
	strcpy(this->model, object.model);
	this->prise = object.prise;
	this->inShop = object.inShop;
	this->ArraySize = object.ArraySize;
	this->ArrayOfNumbers = new int[object.ArraySize];
	for(int i = 0; i < this->ArraySize; i++)
		this->ArrayOfNumbers[i] = object.ArrayOfNumbers[i];
	cout<<"\t\t\tРаботает конструктор копирования"<<endl;
}

void good :: set(char* firm, char* model, int prise, int inShop, int* ArrayOfNumbers, int ArraySize) 
{
	strcpy(this->firm, firm);
	strcpy(this->model, model);
	this->prise = prise;
	this->inShop = inShop;
	for(int i = 0; i < ArraySize; i++)
		this->ArrayOfNumbers[i] = ArrayOfNumbers[i];
	this->ArraySize = ArraySize;
}

void good :: set_firm(char* firm)
{
	strcpy(this->firm, firm);
}

void good :: set_model(char* model)
{
	strcpy(this->model, model);
}

void good :: set_prise(int prise)
{
	this->prise = prise;
}

void good :: set_inShop(int inShop)
{
	this->inShop = inShop;
}

void good :: set_ArrayOfNumbers(int* ArrayOfNumbers)
{
	for(int i = 0; i < this->ArraySize; i++)
		this->ArrayOfNumbers[i] = ArrayOfNumbers[i];
}

void good :: set_ArraySize(int ArraySize)
{
	this->ArraySize = ArraySize;
}

char* good :: get_firm()
{
	char* firm = new char[strlen(this->firm) + 1];
	strcpy(firm, this->firm);
	return firm;
}

char* good :: get_model()
{
	char* model = new char[strlen(this->model) + 1];
	strcpy(model, this->model);
	return model;
}

int good :: get_prise()
{
	return this->prise;
}

int good :: get_inShop()
{
	return this->inShop;
}

int* good :: get_ArrayOfNumbers()
{
	int* newArrayOfNumbers = new int[sizeof this->ArraySize];
	for(int i = 0; i < this->ArraySize; i++)
		newArrayOfNumbers[i] = this->ArrayOfNumbers[i];
	return newArrayOfNumbers;
}

int good :: get_ArraySize()
{
	return this->ArraySize;
}

void good :: showClass()
{
	cout<<"\t\t\t";
	cout<<this->firm<<" || "<<this->model<<" || "<<this->prise<<" || "<<this->inShop<<endl;
	cout<<"\t\t\t";
	for(int i = 0;i < this->ArraySize; i++)
	{
		cout<<this->ArrayOfNumbers[i]<<" ";
	}
	cout<<endl;
}

good :: ~good()
{
	delete [] this->firm;
	delete [] this->model;
	delete [] this->ArrayOfNumbers;
}

good &good :: operator = (good &object)
{
	if(this == &object)
		return *this;
	delete [] this->firm;
	delete [] this->model;
	this->prise = 0;
	this->inShop = 0;
	this->ArraySize = 0;
	delete [] this->ArrayOfNumbers;
	this->firm = new char[strlen(object.firm) + 1];
	strcpy(this->firm, object.firm);
	this->model = new char[strlen(object.model) + 1];
	strcpy(this->model, object.model);
	this->prise = object.prise;
	this->inShop = object.inShop;
	this->ArrayOfNumbers = new int[object.ArraySize];
	for(int i = 0; i < object.ArraySize; i++)
		this->ArrayOfNumbers[i] = object.ArrayOfNumbers[i];
	this->ArraySize = object.ArraySize;
	return *this;
}

good good :: operator ++ ()
{
	this->prise += 10;
	return *this;
}

int &good::operator [](int i)   
{
	if(i < 0 || i > this->ArraySize)
	{
		cout<<"Выход за пределы массива. Было возвращено первое значение в массиве."<<endl;
		return this->ArrayOfNumbers[0];
	}
	return this->ArrayOfNumbers[i];
}

good good :: operator --(int)
{
	this->prise -= 10;
	return *this;
}

void good :: set_model(int modelInt)   
{
	char* model = new char[20];
	char buffer[20];
	model = _itoa(modelInt, buffer, 10);
	delete [] this->model;
	this->model = new char[20];
	strcpy(this->model, model);
}

good :: good(struct All toFullFill)
{
	this->firm = new char[strlen(toFullFill.firm) + 1];
	strcpy(this->firm, toFullFill.firm);
	this->model = new char[strlen(toFullFill.model) + 1];
	strcpy(this->model, toFullFill.model);
	this->prise = toFullFill.prise;
	this->inShop = toFullFill.inShop;
	this->ArraySize = toFullFill.ArraySize;
	this->ArrayOfNumbers = new int[ArraySize];
	for(int i = 0; i < this->ArraySize; i++)
		this->ArrayOfNumbers[i] = toFullFill.ArrayOfNumbers[i];
	cout<<"\t\t\tРаботает конструктор"<<endl;
}

good good :: operator - ()
{
	this->prise *= (-1);
	return *this;
}

good &good :: operator = (char* firm)
{
	if(strcmp(this->firm, firm) == 0)
		return *this;
	else
	{
		delete [] this->firm;
		this->firm = new char[20];
		strcpy(this->firm, firm);
		return *this;
	}
}

int good :: operator + ()
{
	int SumOfArray = 0;
	for(int i = 0; i < this->ArraySize; i++)
		SumOfArray += this->ArrayOfNumbers[i];
	return SumOfArray;
}	

void* good :: operator new[](size_t type, int number)  
{
	cout<<"Перегрузка оператора new[] локально"<<endl;
	system("pause");
	return new char[type * number];
}

void good :: operator delete(void* ptr)
{
	cout<<"Перегрузка delete локально"<<endl;
	system("pause");
	delete ptr;
}

good :: operator int()
{
	return this->prise;
}

good :: operator char*()
{
	return this->model;
}