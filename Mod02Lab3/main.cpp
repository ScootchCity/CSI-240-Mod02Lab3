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
		while( !input.eof() )
		{
			i++;
			string bookName = "book" + i;
			string name;
			int type;
			int pages;
			float ounces;
			getline( input, name );
			input >> type >> pages >> ounces;
			input.ignore(INT_MAX, '\n');  //ignore the newline char at the end of the line
         
			//create Book object here!
			Book bookName = new Book();
         
			//write out report line for movie here!
			
         
		}
	}
	else
	{
		cout << "File not found: " << FILENAME << endl;
	}
   
	system("pause");
	return 0;
}