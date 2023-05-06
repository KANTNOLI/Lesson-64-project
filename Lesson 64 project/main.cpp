#include "manager.h"

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 4);
	Rectangle rect3;
	Rectangle rect4(3, 4);

	cout << rect1.convert() << endl;
	cout << "Perimeter: " + to_string(rect1.perimeter()) << endl;
	cout << "Squere: " + to_string(rect1.squere()) << endl;
	cout << "Diagonal: " + to_string(rect1.diagonal()) << endl;

	cout << rect2.convert() << endl;
	cout << "Perimeter: " + to_string(rect2.perimeter()) << endl;
	cout << "Squere: " + to_string(rect2.squere()) << endl;
	cout << "Diagonal: " + to_string(rect2.diagonal()) << endl;

	cout << "Size of Rectangle: " << Rectangle::get_count() << endl;

	return 0;
}