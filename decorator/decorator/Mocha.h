#ifndef _MOCHA_H_
#define _MOCHA_H_

#include <string>
#include "CondimentDecorator.h"

using namespace std;

class Mocha : public CondimentDecorator
{
public:
	Mocha(Beverage* bev) : beverage(bev)
	{
	}

	~Mocha()
	{
		cout << "Mocha decorator destructor:" << endl;
		delete beverage;
	}

	virtual string getDescription()
	{
		return beverage->getDescription() + ", Mocha";
	}
	virtual double cost()
	{
		return 0.20 + beverage->cost();
	}

private:
	Beverage* beverage;
};

#endif