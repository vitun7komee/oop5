#include "Container.h"
Container::Container() {
	size = 0;
	arr = new double[size];
}
Container::Container(size_t s) {
	size = s;
	arr = new double[size];
	for (size_t i = 0; i < s; i++) {
		arr[i] = rand() % 100 + 1;
	}
}
Container::Container(Container& ch) {
	size = ch.size;
	arr = new double[size];
	for (size_t i = 0; i < size; ++i)
	{
		arr[i] = ch.arr[i];
	}
}
Container::Container(size_t s, double* a) {
	size = s;
	arr = new double[size];
	for (size_t i = 0; i < s; i++) {
		arr[i] = a[i];
	}
}
std::ostream& operator<<(std::ostream& out, Container& c) {
	out << "CONT \n ";
	for (size_t i = 0; i < c.size; i++) {
		out << c.arr[i] << "  ";
	}
	return out;
}
double* Container::getarr() { return arr; }
size_t Container::getsize() { return size; }
 

