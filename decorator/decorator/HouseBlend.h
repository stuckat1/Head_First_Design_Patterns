#ifndef _HOUSE_BLEND_H_
#define _HOUSE_BLEND_H_

#include <string>
#include "Beverage.h"

using namespace std;

class HouseBlend : public Beverage
{
public:
	HouseBlend()
	{
		description = "House Blend Coffee";
	}

	~HouseBlend()
	{
		cout << "House Blend destructor:" << endl;
	}

	virtual double cost()
	{
		return 0.89;
	}
};

#endif