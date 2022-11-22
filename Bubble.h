#pragma once
#include "Container.h"

class Bubble : public Container{
public:
	Bubble(size_t s);
	Bubble(size_t s, double* a);
	Bubble(Bubble& obj);

	void foreach() override;
	void sort() override;
	void randomfill() override;
	Bubble& operator=(Bubble& b);

	~Bubble() override;

	friend std::ostream& operator<<(std::ostream& out, Bubble& b);
	friend std::istream& operator>>(std::istream& in, Bubble& b);
};
