#ifndef _CONDIMENT_DECORATOR_H_
#define _CONDIMENT_DECORATOR_H_

#include <string>
#include "Beverage.h"

using namespace std;

class CondimentDecorator : public Beverage
{
public:
	virtual string getDescription() = 0;
};

#endif