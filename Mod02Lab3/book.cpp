#include "book.h"
#include <iostream>

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

string Book::formatReportLine() //return a string with all the info for the book
{
	string reportLine = bName + "\t| Type: " + getTypeName() + "  Pages: " + bPages + "  Weight(lbs): " + getWeightLbs();
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
	cout << bType << endl;

	return typeStr;
}