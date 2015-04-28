#ifndef _ESPRESSO_H_
#define _ESPRESSO_H_

#include <string>
#include "Beverage.h"

using namespace std;

class Espresso : public Beverage
{
public:
	Espresso()
	{
		description = "Espresso";
	}

	~Espresso()
	{
		cout << "Espresso destructor:" << endl;
	}

	virtual double cost()
	{
		return 1.99;
	}
};

#endif