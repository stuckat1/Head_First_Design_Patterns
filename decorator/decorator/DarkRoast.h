#ifndef _DARK_ROAST_H_
#define _DARK_ROAST_H_

#include <string>
#include "Beverage.h"

using namespace std;

class DarkRoast : public Beverage
{
public:
	DarkRoast()
	{
		description = "Dark Roast Coffee";
	}

	~DarkRoast()
	{
		cout << "Dark Roast destructor:" << endl;
	}
		
		virtual double cost()
	{
		return 0.99;
	}
};

#endif