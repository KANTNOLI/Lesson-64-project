#pragma once
#include "main.h"

class Rectangle
{
private:
	int a;
	int b;

public:
	Rectangle() : a(1), b(1) {}
	Rectangle(int a, int b) : a(a), b(b) {}

	void set_a(int a1);
	void set_b(int b1);

	int get_a();
	int get_b();

	int perimeter();
	int squere();
	double diagonal();

	string convert();
};

