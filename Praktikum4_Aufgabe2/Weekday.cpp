/* Author: Kat Bergen
v01 21.06.2020

cpp set up weekdays

PAD1 P4A3
*/

#include "Weekday.h"
#include "MyError.h"

//standarskostruktor
Weekday::Weekday() : day{}, integers{}
{}

Weekday::Weekday(const string& d) : day{ d }, integers{}
{}

string Weekday::getWeekday() const
{
	return day;
}

vector<int> Weekday::getIntegers() const
{
	return integers;
}

void Weekday::addInteger(const int& i) {
	integers.push_back(i);
}

int sum(Weekday& d)
{
	vector<int> integers{ d.getIntegers() };
	int sum{};

	for (unsigned int i{}; i < integers.size(); i++)
	{
		sum += integers.at(i);
	}

	return sum;
}

double meanResult(const double& i1, const double& i2)
{
	return i1 / i2;
}

double mean(Weekday& d)
{
	int sumValue{ sum(d) };
	int size{ (int) d.getIntegers().size() };
	double resultValue{ meanResult(sumValue, size) };

	if (size > 0) return resultValue;
	else return 0;
}

void print(Weekday& d)
{
	cout << d.getWeekday() << " integers: ";

	for (unsigned int i{ 0 }; i < d.getIntegers().size(); i++)
	{
		cout << d.getIntegers().at(i) << ',';
	}

	cout << "	das arithmethische Mittel ist : " << mean(d);
}
