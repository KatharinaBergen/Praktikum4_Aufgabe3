/* Author: Kat Bergen
v01 21.06.2020

header set up weekdays

PAD1 P4A3
*/

#include <iostream>
#include <vector>
#include <string>

using std::vector; 
using std::cin;
using std::cout;
using std::string;

class Weekday {
private:
	string day;
	vector<int> integers;

public:
	Weekday(); //standardcostructor
	Weekday(const string&); 
	string getWeekday() const;
	vector<int> getIntegers() const;
	void addInteger(const int&);
};

int sum(Weekday&);
double meanResult(const double&, const double&);
double mean(Weekday&);
void print(Weekday&);
