#include "book.h"
#include <iostream>
#include <string>
#include <sstream>

Book::Book()
{

}

Book::Book(const string& name, Type type, int pages, float ounces)
{
	bName = name;
	bType = type;
	bPages = pages;
	bOunces = ounces;
}
/*
string Book::formatReportLine() //return a string with all the info for the book
{
	string reportLine = bName + "\t| Type: " + getTypeName() + "  Pages: " + to_string(getPages()) + "  Weight(lbs): " + to_string(getWeightLbs()) + "\n";
	return reportLine;
}
*/
string Book::formatReportLine() //return a string with all the info for the book
{
	stringstream ss;
	ss << bName << "\t| Type: " << getTypeName() << "  Pages: " << getPages() << "  Weight(lbs): " << getWeightLbs() << "\n";
	return ss.str();
}

float Book::getWeightLbs() //calculate and return the weight of the book in lbs
{
	const float POUNDS_PER_OUNCE = 0.0625;
	float weightLbs = bOunces * POUNDS_PER_OUNCE;
	return weightLbs;
}

string Book::getTypeName() //return the string which correlates with the book type
{
	string typeStr = "null";
	typeStr = TYPE_WORDS[bType];

	return typeStr;
}