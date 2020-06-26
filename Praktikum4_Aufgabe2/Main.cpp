/* Author: Kat Bergen
v01 21.06.2020

Program to read in weekdays with number pairs by user input. 
Stores weekdays with vector<int> in vector and outputs weekdays, their numbers and mean of numbers. 
Additional output of number of invalid weekdays.

PAD1 P4A3
*/

#include "Weekday.h"
#include"MyError.h"

int main() try {

	// set up weekdays

	Weekday monday{ "Mo" };
	Weekday tuesday{ "Di" };
	Weekday wednesday{ "Mi" };
	Weekday thursday{ "Do"};
	Weekday friday{ "Fr" };
	Weekday saturday{ "Sa" };
	Weekday sunday{ "So" };

	Weekday noday{ "Not a day" }; //not stored in vector
	Weekday breakday{ "q" }; //not stored in vector


	//user input

	cout << "Bitte geben Sie den Wochentage gefolgt von Zahlen ein (zb 'Mo 3'). Beenden Sie die Eingabe mit 'q'.\n";
	string input{};
	int value{};
	do {
		cin >> input;
		if (!cin) error("not a string input");

		//assign days
		if (input == "q") break;
		else if (input == "Montag" || input == "Mo") { cin >> value; if(!cin) error("not an integer"); monday.addInteger(value); }
		else if (input == "Dienstag" || input == "Di") { cin >> value; if (!cin) error("not an integer"); tuesday.addInteger(value); }
		else if (input == "Mittwoch" || input == "Mi") { cin >> value; if (!cin) error("not an integer"); wednesday.addInteger(value); }
		else if (input == "Donnerstag" || input == "Do") { cin >> value; if (!cin) error("not an integer"); thursday.addInteger(value); }
		else if (input == "Freitag" || input == "Fr") { cin >> value; if (!cin) error("not an integer"); friday.addInteger(value); }
		else if (input == "Samstag" || input == "Sa") { cin >> value; if (!cin) error("not an integer"); saturday.addInteger(value); }
		else if (input == "Sonntag" || input == "So") { cin >> value; if (!cin) error("not an integer"); sunday.addInteger(value); }
		else { cin >> value; if (!cin) error("not an integer"); noday.addInteger(value); }

	} while (cin);

	
	//set up vector and store weekdays in it 
	vector<Weekday> days{};

	days.push_back(monday);
	days.push_back(tuesday);
	days.push_back(wednesday);
	days.push_back(thursday);
	days.push_back(friday);
	days.push_back(saturday);
	days.push_back(sunday);

	for (unsigned int i{ 0 }; i < days.size(); i++)
	{
		print(days.at(i));
		cout << std::endl; 
	}

	cout << "\nSie haben ausserdem " << noday.getIntegers().size() << " Werte eingegeben, die wegen unzulaessigen Tagen nicht angegeben werden. \n";

	return 0;
}
catch (std::runtime_error e)
{
	std::cerr << e.what();
	return -1;
}
catch (...)
{
	std::cerr << "Unknown error";
	return -2;
}