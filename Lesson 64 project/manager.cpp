#include "manager.h"


int Manager::perimeter(Rectangle rec) {
	return (rec.get_a() + rec.get_b()) * 2;
}
int Manager::squere(Rectangle rec) {
	return rec.get_a() * rec.get_b();
}
double Manager::diagonal(Rectangle rec) {
	return sqrt(rec.get_a() * rec.get_a() + rec.get_b() * rec.get_b());
}
