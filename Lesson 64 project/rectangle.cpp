#include "rectangle.h"

int Rectangle::count = 0;

void Rectangle::set_a(int a1) {
	a = a1 > 0 ? a1 : a;
}
void Rectangle::set_b(int b1) {
	b = b1 > 0 ? b1 : b;
}

int Rectangle::get_a() {
	return a;
}
int Rectangle::get_b() {
	return b;
}

string Rectangle::convert() {
	return "Rectangle: a = " + to_string(a) + ", b = " + to_string(b);
}