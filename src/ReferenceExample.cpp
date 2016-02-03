//============================================================================
// Name        : ReferenceExample.cpp
// Author      : Josep
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

void swapDoesNotWork (int a , int b) {
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
}

void swap (int &a, int &b) {
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
}

void stringSwap(string &a, string &b) {
	string tmp;

	tmp = a;
	a = b;
	b = tmp;
	cout << tmp << " " << b << endl;
}

int main() {

	int x, y;

	x = 1; y = 7;

	swapDoesNotWork(x,y);
	cout << "Does not work -->  ";
	cout << "x: " << x << ", y: " << y << endl;

	swap(x,y);
	cout << "Does work -->      ";
	cout << "x: " << x << ", y: " << y << endl;

	string a("hola");
	string b("adeu");
	stringSwap(a,b);
	cout << "string a: " << a << ", b: " << b << endl;

	return 0;
}
