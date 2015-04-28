#ifndef _SOY_H_
#define _MOCHA_H_

#include <string>
#include "CondimentDecorator.h"

using namespace std;

class Soy : public CondimentDecorator
{
public:
	Soy(Beverage* bev) : beverage(bev)
	{
	}

	~Soy()
	{
		cout << "Soy decorator destructor:" << endl;
		delete beverage;
	}

	virtual string getDescription()
	{
		return beverage->getDescription() + ", Soy";
	}
	virtual double cost()
	{
		return 0.15 + beverage->cost();
	}

private:
	Beverage* beverage;
};

#endif