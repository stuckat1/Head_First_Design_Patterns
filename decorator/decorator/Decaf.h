#ifndef _DECAF_H_
#define _DECAF_H_

#include <string>
#include "Beverage.h"

using namespace std;

class Decaf : public Beverage
{
public:
	Decaf()
	{
		description = "Decaf Coffee";
	}

	~Decaf()
	{
		cout << "Decaf destructor:" << endl;
	}

	virtual double cost()
	{
		return 1.05;
	}
};

#endif