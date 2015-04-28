#ifndef _WHIP_H_
#define _WHIP_H_

#include <string>
#include "CondimentDecorator.h"

using namespace std;

class Whip : public CondimentDecorator
{
public:
	Whip(Beverage* bev) : beverage(bev)
	{
	}

	~Whip()
	{
		cout << "Whip decorator destructor:" << endl;
		delete beverage;
	}

	virtual string getDescription()
	{
		return beverage->getDescription() + ", Whip";
	}
	virtual double cost()
	{
		return 0.10 + beverage->cost();
	}

private:
	Beverage* beverage;
};

#endif