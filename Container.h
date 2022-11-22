#pragma once
#include <iostream>
#include <cmath>
#include <string>
#include <ctime>


class Container {
protected:
	double* arr;
	size_t size;
public:
	Container();
	Container(size_t s);
	Container(size_t s, double* a);
	Container(Container& ch);

	virtual void sort() {}
	virtual void foreach() {}
	virtual void randomfill() {}
	virtual double* getarr();
	virtual size_t getsize();

	virtual ~Container(){
		delete[] arr;
		arr = nullptr;
		size = 0;
	}

	friend std::ostream& operator<<(std::ostream& out, Container& c);
};
