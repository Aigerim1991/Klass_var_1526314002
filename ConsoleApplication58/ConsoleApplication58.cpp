#include "stdafx.h"
#include <iostream>
#include <clocale>
using namespace std;

enum type {
	type_none,
	type_number,
	type_real,
	type_string
};

class var {
	union
	{
		long long number;
		double real;
		string str;
	};
	type data;
	size_t len;
public:
	// —оздайте конструкторы дл€ следующих типов данных
	// bool
	// char*
	// short int
	// unsigned short int
	// int
	// unsigned int
	// long int
	// unsigned long int
	// float
	// long float ------------------- компил€тор ругаетс€ как на не стандартный тип данных

	var();
	var(long long num);
	var(double num);
	var(bool num);
	var(string String);
	var(short int num);
	var(unsigned short int num);
	var(int num);
	var(unsigned int num);
	var(long int num);
	var(unsigned long int num);
	var(float num);
	//var(long float num);

	/*ƒл€ чисел, перегрузите операторы по каждому типу
	+, -, *, /, =, +=, -=, ==, <, >
	ƒл€ строки, перегрузите операторы
	+, =, ==, <, >*/
	var operator+ (long long num);
	var operator+ (double num);
	var operator+ (bool num);
	var operator+ (string num);
	var operator+ (short int num);
	var operator+ (unsigned short int num);
	var operator+ (int num);
	var operator+ (unsigned int num);
	var operator+ (long int num);
	var operator+ (unsigned long int num);
	var operator+ (float num);
	//var operator+ (long float num);

	var operator- (long long num);
	var operator- (double num);
	var operator- (bool num);
	var operator- (short int num);
	var operator- (unsigned short int num);
	var operator- (int num);
	var operator- (unsigned int num);
	var operator- (long int num);
	var operator- (unsigned long int num);
	var operator- (float num);
	//var operator- (long float num);

	var operator* (long long num);
	var operator* (double num);
	var operator* (bool num);
	var operator* (short int num);
	var operator* (unsigned short int num);
	var operator* (int num);
	var operator* (unsigned int num);
	var operator* (long int num);
	var operator* (unsigned long int num);
	var operator* (float num);
	//var operator* (long float num);

	var operator/ (long long num);
	var operator/ (double num);
	var operator/ (bool num);
	var operator/ (short int num);
	var operator/ (unsigned short int num);
	var operator/ (int num);
	var operator/ (unsigned int num);
	var operator/ (long int num);
	var operator/ (unsigned long int num);
	var operator/ (float num);
	//var operator/ (long float num);

	var operator= (long long num);
	var operator= (double num);
	var operator= (bool num);
	var operator= (string num);
	var operator= (short int num);
	var operator= (unsigned short int num);
	var operator= (int num);
	var operator= (unsigned int num);
	var operator= (long int num);
	var operator= (unsigned long int num);
	var operator= (float num);
	//var operator= (long float num);

	var operator== (long long num);
	var operator== (double num);
	var operator== (bool num);
	var operator== (string num);
	var operator== (short int num);
	var operator== (unsigned short int num);
	var operator== (int num);
	var operator== (unsigned int num);
	var operator== (long int num);
	var operator== (unsigned long int num);
	var operator== (float num);
	//var operator== (long float num);

	void operator+= (long long num);
	void operator+= (double num);
	void operator+= (bool num);
	void operator+= (short int num);
	void operator+= (unsigned short int num);
	void operator+= (int num);
	void operator+= (unsigned int num);
	void operator+= (long int num);
	void operator+= (unsigned long int num);
	void operator+= (float num);
	//void operator+= (long float num);

	void operator-= (long long num);
	void operator-= (double num);
	void operator-= (bool num);
	void operator-= (short int num);
	void operator-= (unsigned short int num);
	void operator-= (int num);
	void operator-= (unsigned int num);
	void operator-= (long int num);
	void operator-= (unsigned long int num);
	void operator-= (float num);
	//void operator-= (long float num);

	bool operator< (long long num);
	bool operator< (double num);
	bool operator< (bool num);
	bool operator< (string num);
	bool operator< (short int num);
	bool operator< (unsigned short int num);
	bool operator< (int num);
	bool operator< (unsigned int num);
	bool operator< (long int num);
	bool operator< (unsigned long int num);
	bool operator< (float num);
	//bool operator< (long float num);

	bool operator> (long long num);
	bool operator> (double num);
	bool operator> (bool num);
	bool operator> (string num);
	bool operator> (short int num);
	bool operator> (unsigned short int num);
	bool operator> (int num);
	bool operator> (unsigned int num);
	bool operator> (long int num);
	bool operator> (unsigned long int num);
	bool operator> (float num);
	//bool operator> (long float num);


	operator long long();
	operator double();
	operator bool();
	operator string();
	operator short int();
	operator unsigned short int();
	operator int();
	operator unsigned int();
	operator long int();
	operator unsigned long int();
	operator float();
	//operator long float();

	~var();
};

var::var()
{
	data = type_none;
	len = 0;
}

var::var(long long num) : var()
{
	number = num;
	data = type_number;
}

var::var(double num) : var()
{
	real = num;
	data = type_real;
}

var::var(bool num)
{
	number = num;
	data = type_number;
}

var::var(string  String)
{
	str = String;
	data = type_string;
}

var::var(short int num)
{
	number = num;
	data = type_number;
}

var::var(unsigned short int num)
{
	number = num;
	data = type_number;
}

var::var(int num)
{
	number = num;
	data = type_number;
}

var::var(unsigned int num)
{
	number = num;
	data = type_number;
}

var::var(long int num)
{
	number = num;
	data = type_number;
}

var::var(unsigned long int num)
{
	number = num;
	data = type_number;
}

var::var(float num)
{
	real = num;
	data = type_real;
}

//var::var(long float num)
//{
//	real = num;
//	data = type_real;
//}

var var::operator+(long long num)
{

	return (num + number);
}

var var::operator+(double num)
{
	return (num + real);
}

var var::operator+(bool num)
{
	return (num + number);
}

var var::operator+(string num)
{
	return str + num;
}

var var::operator+(short int num)
{
	return (num + number);
}

var var::operator+(unsigned short int num)
{
	return (num + number);
}

var var::operator+(int num)
{
	return (num + number);
}

var var::operator+(unsigned int num)
{
	return (num + number);
}

var var::operator+(long int num)
{
	return (num + number);
}

var var::operator+(unsigned long int num)
{
	return (num + number);
}

var var::operator+(float num)
{
	return (num + real);
}

//var var::operator+(long float num)
//{
//	return (num + real);
//}

var var::operator-(long long num)
{
	return (number - num);
}

var var::operator-(double num)
{
	return (real - num);
}

var var::operator-(bool num)
{
	return (number - num);
}

var var::operator-(short int num)
{
	return (number - num);
}

var var::operator-(unsigned short int num)
{
	return (number - num);
}

var var::operator-(int num)
{
	return (number - num);
}

var var::operator-(unsigned int num)
{
	return (number - num);
}

var var::operator-(long int num)
{
	return (number - num);
}

var var::operator-(unsigned long int num)
{
	return (number - num);
}

var var::operator-(float num)
{
	return (real - num);
}

//var var::operator-(long float num)
//{
//	return (real - num);
//}

var var::operator*(long long num)
{
	return (number * num);
}

var var::operator*(double num)
{
	return (real * num);
}

var var::operator*(bool num)
{
	return (number * num);
}

var var::operator*(short int num)
{
	return (number * num);
}

var var::operator*(unsigned short int num)
{
	return (number * num);
}

var var::operator*(int num)
{
	return (number * num);
}

var var::operator*(unsigned int num)
{
	return (number * num);
}

var var::operator*(long int num)
{
	return (number * num);
}

var var::operator*(unsigned long int num)
{
	return (number * num);
}

var var::operator*(float num)
{
	return (real * num);
}

//var var::operator*(long float num)
//{
//	return (real * num);
//}

var var::operator/(long long num)
{
	return (number / num);
}

var var::operator/(double num)
{
	return (real / num);
}

var var::operator/(bool num)
{
	return (number / num);
}

var var::operator/(short int num)
{
	return (number / num);
}

var var::operator/(unsigned short int num)
{
	return (number / num);
}

var var::operator/(int num)
{
	return (number / num);
}

var var::operator/(unsigned int num)
{
	return (number / num);
}

var var::operator/(long int num)
{
	return (number / num);
}

var var::operator/(unsigned long int num)
{
	return (number / num);
}

var var::operator/(float num)
{
	return (real / num);
}

//var var::operator/(long float num)
//{
//	return (real / num);
//}

var var::operator=(long long num)
{
	return (number = num);
}

var var::operator=(double num)
{
	return (real = num);
}

var var::operator=(bool num)
{
	return (number = num);
}

var var::operator=(string num)
{
	return str = num;
}

var var::operator=(short int num)
{
	return (number = num);
}

var var::operator=(unsigned short int num)
{
	return (number = num);
}

var var::operator=(int num)
{
	return (number = num);
}

var var::operator=(unsigned int num)
{
	return (number = num);
}

var var::operator=(long int num)
{
	return (number = num);
}

var var::operator=(unsigned long int num)
{
	return (number = num);
}

var var::operator=(float num)
{
	return (real = num);
}

//var var::operator=(long float num)
//{
//	return (real = num);
//}

var var::operator==(long long num)
{
	return (number == num);
}

var var::operator==(double num)
{
	return (real == num);
}

var var::operator==(bool num)
{
	return (number == num);
}

var var::operator==(string num)
{
	return str == num;
}

var var::operator==(short int num)
{
	return (number == num);
}

var var::operator==(unsigned short int num)
{
	return (number == num);
}

var var::operator==(int num)
{
	return (number == num);
}

var var::operator==(unsigned int num)
{
	return (number == num);
}

var var::operator==(long int num)
{
	return (number == num);
}

var var::operator==(unsigned long int num)
{
	return (number == num);
}

var var::operator==(float num)
{
	return (real == num);
}

//var var::operator==(long float num)
//{
//	return (real = num);
//}

void var::operator+=(long long num)
{
	number += num;
}

void var::operator+=(double num)
{
	real += num;
}

void var::operator+=(bool num)
{
	number += num;
}

void var::operator+=(short int num)
{
	number += num;
}

void var::operator+=(unsigned short int num)
{
	number += num;
}

void var::operator+=(int num)
{
	number += num;
}

void var::operator+=(unsigned int num)
{
	number += num;
}

void var::operator+=(long int num)
{
	number += num;
}

void var::operator+=(unsigned long int num)
{
	number += num;
}

void var::operator+=(float num)
{
	real += num;
}

//void var::operator+=(long float num)
//{
//	real += num;
//}

void var::operator-=(long long num)
{
	number -= num;
}

void var::operator-=(double num)
{
	real -= num;
}

void var::operator-=(bool num)
{
	number -= num;
}

void var::operator-=(short int num)
{
	number -= num;
}

void var::operator-=(unsigned short int num)
{
	number -= num;
}

void var::operator-=(int num)
{
	number -= num;
}

void var::operator-=(unsigned int num)
{
	number -= num;
}

void var::operator-=(long int num)
{
	number -= num;
}

void var::operator-=(unsigned long int num)
{
	number -= num;
}

void var::operator-=(float num)
{
	real -= num;
}

//void var::operator-=(long float num)
//{
//	real -= num;
//}

bool var::operator<(long long num)
{
	if (number < num)
		return true;
	return false;
}

bool var::operator<(double num)
{
	if (real < num)
		return true;
	return false;
}

bool var::operator<(bool num)
{
	if (number < num)
		return true;
	return false;
}

bool var::operator<(string num)
{
	if (str < num)
		return true;
	return false;
}

bool var::operator<(short int num)
{
	if (number < num)
		return true;
	return false;
}

bool var::operator<(unsigned short int num)
{
	if (number < num)
		return true;
	return false;
}

bool var::operator<(int num)
{
	if (number < num)
		return true;
	return false;
}

bool var::operator<(unsigned int num)
{
	if (number < num)
		return true;
	return false;
}

bool var::operator<(long int num)
{
	if (number < num)
		return true;
	return false;
}

bool var::operator<(unsigned long int num)
{
	if (number < num)
		return true;
	return false;
}

bool var::operator<(float num)
{
	if (real < num)
		return true;
	return false;
}

//bool var::operator<(long float num)
//{
//	if (real < num)
//		return true;
//	return false;
//}

bool var::operator>(long long num)
{
	if (number > num)
		return true;
	return false;
}

bool var::operator>(double num)
{
	if (real > num)
		return true;
	return false;
}

bool var::operator>(bool num)
{
	if (number > num)
		return true;
	return false;
}

bool var::operator>(string num)
{
	if (str > num)
		return true;
	return false;
}

bool var::operator>(short int num)
{
	if (number > num)
		return true;
	return false;
}

bool var::operator>(unsigned short int num)
{
	if (number > num)
		return true;
	return false;
}

bool var::operator>(int num)
{
	if (number > num)
		return true;
	return false;
}

bool var::operator>(unsigned int num)
{
	if (number > num)
		return true;
	return false;
}

bool var::operator>(long int num)
{
	if (number > num)
		return true;
	return false;
}

bool var::operator>(unsigned long int num)
{
	if (number > num)
		return true;
	return false;
}

bool var::operator>(float num)
{
	if (real > num)
		return true;
	return false;
}

//bool var::operator>(long float num)
//{
//	if (real > num)
//		return true;
//	return false;
//}

var::operator long long()
{
	return number;
}

var::operator double()
{
	return real;
}

var::operator bool()
{
	return number;
}

var::operator string()
{
	return str;
}

var::operator short int()
{
	return number;
}

var::operator unsigned short int()
{
	return number;
}

var::operator int()
{
	return number;
}

var::operator unsigned int()
{
	return number;
}

var::operator long int()
{
	return number;
}

var::operator unsigned long int()
{
	return number;
}

var::operator float()
{
	return real;
}

//var::operator long float()
//{
//	return real;
//}


var::~var()
{

}

int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "Size class var = " << sizeof(var) << endl;

	var tmp(7ll);
	cout << (long long)tmp << endl;

	var tmp2(7.5);
	cout << (double)tmp2 << endl;

	system("pause");

	return 0;
}