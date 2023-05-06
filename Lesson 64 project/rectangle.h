#pragma once
#include "main.h"

class Rectangle
{
private:
	int a;
	int b;
	static int count;

public:

	Rectangle() : a(1), b(1) {
		Rectangle::count++;
	}
	Rectangle(int a, int b) : a(a), b(b) {
		Rectangle::count++;
	}
	~Rectangle() {
		Rectangle::count--;
	}

	void set_a(int a1);
	void set_b(int b1);

	int get_a();
	int get_b();

	static int get_count() {
		return count;
	}

	string convert();
};

