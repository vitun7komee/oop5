#pragma once
#include "Container.h"


class  Choice : public Container {
public:
	Choice(size_t s);
	Choice(size_t s, double* a);
	Choice(Choice& ch);

	void sort() override;
	void foreach() override;
	void randomfill() override;
	Choice& operator=(Choice& c);

	~Choice() override;

	friend std::ostream& operator<<(std::ostream& out, Choice& c);
	friend std::istream& operator>>(std::istream& in, Choice& c);
};

