#include "Choice.h"

Choice::Choice(size_t s){
	size = s;
	arr = new double[size];
	//for (size_t i = 0; i < s; i++) {
	//	arr[i] = rand() % 100 + 1;
	//}
}
Choice::Choice(size_t s, double* a) {
	size = s;
	arr = new double[size];
	for (size_t i = 0; i < s; i++) {
		arr[i] = a[i];
	}
}
Choice::Choice(Choice& ch) {
	size = ch.size;
	arr = new double[size];
	for (size_t i = 0; i < size; ++i)
	{
		arr[i] = ch.arr[i];
	}
}
void Choice::sort() {

	for (int startIndex = 0; startIndex < size - 1; ++startIndex)
	{
		int smallestIndex = startIndex;
		for (int currentIndex = startIndex + 1; currentIndex < size; ++currentIndex)
		{
			if (arr[currentIndex] < arr[smallestIndex])
				smallestIndex = currentIndex;
		}
		std::swap(arr[startIndex], arr[smallestIndex]);
	}
}
Choice& Choice::operator=(Choice& c) {
	if (&c != this)
	{
		size = c.size;
		for (size_t i = 0; i < size; i++) {
			arr[i] = c.arr[i];
		}
	}
	else
		return *this;
}
void Choice::foreach() {
	for (size_t i = 0; i < size; i++) {
		arr[i] = log(arr[i]);
	}
}
void Choice::randomfill() {
	for (size_t i = 0; i < size; i++) {
		arr[i] = rand() % 100 + 1;
	}
}
Choice::~Choice() {
	delete[] arr;
	arr = nullptr;
	size = 0;
}
std::istream& operator>>(std::istream& in, Choice& c) {
	//std::cout << "enter size :";
	//in >> c.size;
	std::cout << "array elements :\n";
	for (size_t i = 0; i < c.size; i++) {
		in >> c.arr[i];
		std::cin.ignore();
	}
	return in;
}
std::ostream& operator<<(std::ostream& out, Choice& c) {
	out << "ARR \n ";
	for (size_t i = 0; i < c.size; i++) {
		out  << c.arr[i] << "  ";
	}
	return out;
}