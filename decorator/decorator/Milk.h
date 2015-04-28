#ifndef _MILK_H_
#define _MILK_H_

#include <string>
#include "CondimentDecorator.h"

using namespace std;

class Milk : public CondimentDecorator
{
public:
	Milk(Beverage* bev) : beverage(bev)
	{
	}

	~Milk()
	{
		cout << "Milk decorator destructor:" << endl;
		delete beverage;
	}
	virtual double cost()
	{
		return 0.10 + beverage->cost();
	}

private:
	Beverage* beverage;
};

#endif