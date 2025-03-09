//
//  main.cpp
//  lab3
//
//
//  Modified by: Murat K. Gungor 
//  Thanks to Brian R. Hall
//

#include <iostream>
#include <fstream>
#include <string>
#include "book.h"

using namespace std;

int main()
{
	const string FILENAME("books.txt");
   
	ifstream input(FILENAME);

	int i = 0;
   
	if( input.good() )
	{
		while(!input.eof())
		{
			i++;
			//string bookName = "book" + i;
			string name;
			int typeInt = -1;
			int pages;
			Type type = UNKNOWN;
			float ounces;
			getline(input, name);
			input >> typeInt >> pages >> ounces;
			input.ignore(INT_MAX, '\n');  //ignore the newline char at the end of the line

			if (typeInt == 0) {
				type = PAPERBACK;
			}
			else if(typeInt == 1) {
				type = HARDBACK;
			}

			//create Book object here!
			Book ourBook(name, type, pages, ounces);

			//write out report line for movie here!
			string reportLine = ourBook.formatReportLine();
			cout << reportLine;
         
		}
	}
	else
	{
		cout << "File not found: " << FILENAME << endl;
	}
   
	system("pause");
	return 0;
}