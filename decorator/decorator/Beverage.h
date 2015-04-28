#ifndef _BEVERAGE_H_
#define _BEVERAGE_H_

#include <string>

using namespace std;

class Beverage
{
public:

	virtual string getDescription() 
	{ 
		return description; 
	}

	virtual ~Beverage() {};
	virtual double cost() = 0;

protected:
	Beverage() : description("Unknown Beverage") {}
	string description;
};

#endif
