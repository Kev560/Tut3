#include <iostream>
#include <string>
#include "UpDown.h"

using namespace std;


UpDownCount::UpDownCount(int low, int high, int inc, int dec)
{
	count = low; 
	lowVal = low;
	highVal = high;
	incVal = inc;
	decVal = dec;
}


UpDownCount::~UpDownCount()
{
}

UpDownCount UpDownCount::operator++()
{
	UpDownCount Temp(lowVal, highVal, incVal, decVal);

	
		count += incVal;
	
	Temp.count = count;

	return Temp;
}
UpDownCount UpDownCount::operator++(int)
{
	UpDownCount Temp(lowVal, highVal, incVal, decVal);
	Temp.count = count;

	
		count += incVal;
	
	return Temp;
}
UpDownCount UpDownCount::operator--()
{
	UpDownCount Temp(lowVal, highVal, incVal, decVal);


	
		count -= decVal;
	

	Temp.count = count;

	return Temp;
}
UpDownCount UpDownCount::operator--(int)
{
	UpDownCount Temp(lowVal, highVal, incVal, decVal);
	Temp.count = count;

	
		count -= decVal;
	
	return Temp;
}

std::ostream &operator<<(std::ostream &os, const UpDownCount &rhs)
{
	cout << rhs.count;
	return os;
}